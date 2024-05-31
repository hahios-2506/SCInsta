#import <objc/runtime.h>
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CepheiPrefs/CepheiPrefs.h>
#import <Cephei/HBPreferences.h>
#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import <Preferences/PSEditableTableCell.h>
#import <Preferences/PSSwitchTableCell.h>

#import "../InstagramHeaders.h"
#import "../Tweak.h"

typedef NS_ENUM(NSInteger, DynamicSpecifierOperatorType) {
    EqualToOperatorType,
    NotEqualToOperatorType,
    GreaterThanOperatorType,
    LessThanOperatorType,
};

@interface SCISettingsViewController : HBListController
- (instancetype)init;
- (PSSpecifier *)newSectionWithTitle:(NSString *)header footer:(NSString *)footer;
- (PSSpecifier *)newSwitchCellWithTitle:(NSString *)titleText detailTitle:(NSString *)detailText key:(NSString *)keyText defaultValue:(BOOL)defValue changeAction:(SEL)changeAction;
- (PSSpecifier *)newButtonCellWithTitle:(NSString *)titleText detailTitle:(NSString *)detailText dynamicRule:(NSString *)rule action:(SEL)action;
- (PSSpecifier *)newLinkCellWithTitle:(NSString *)titleText detailTitle:(NSString *)detailText url:(NSString *)url iconURL:(NSString *)iconURL;
- (void)reloadSpecifiers;
- (void)collectDynamicSpecifiersFromArray:(NSArray *)array;
- (BOOL)shouldHideSpecifier:(PSSpecifier *)specifier;
- (DynamicSpecifierOperatorType)operatorTypeForString:(NSString *)string;

- (id)readPreferenceValue:(PSSpecifier *)specifier;
- (void)setPreferenceValue:(id)value specifier:(PSSpecifier *)specifier;
@end

@interface SCIButtonTableViewCell : HBTintedTableCell
@end

@interface SCISwitchTableCell : PSSwitchTableCell
@end
