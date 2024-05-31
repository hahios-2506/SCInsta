#import "../../Manager.h"
#import "../../Utils.h"

%hook IGDirectThreadCallButtonsCoordinator
// Voice Call
- (void)_didTapAudioButton:(id)arg1 {
    if ([SCIManager callConfirmation]) {
        NSLog(@"[SCInsta] Call confirm triggered");

        [SCIUtils showConfirmation:^(void) { %orig; }];
    } else {
        return %orig;
    }
}

// Video Call
- (void)_didTapVideoButton:(id)arg1 {
    if ([SCIManager callConfirmation]) {
        NSLog(@"[SCInsta] Call confirm triggered");
        
        [SCIUtils showConfirmation:^(void) { %orig; }];
    } else {
        return %orig;
    }
}
%end