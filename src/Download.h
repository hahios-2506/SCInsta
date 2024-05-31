#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SCIDownloadDelegate <NSObject>
@optional
- (void)downloadProgress:(float)progress;
- (void)downloadDidFinish:(NSURL *)filePath Filename:(NSString *)fileName;
- (void)downloadDidFailureWithError:(NSError *)error;
@end

@interface SCIDownload : NSObject
{
   id delegate;
}
- (void)setDelegate:(id)newDelegate;
- (instancetype)init;
- (void)downloadFileWithURL:(NSURL *)url;
@property (nonatomic, strong) NSString *fileName;
@end

@interface SCIDownload () <NSURLSessionDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSURLSessionStreamDelegate>
@property (nonatomic, strong) NSURLSession *Session;
@end

NS_ASSUME_NONNULL_END
