#import "../../InstagramHeaders.h"
#import "../../Manager.h"
#import "../../Utils.h"

%hook IGDirectThreadThemePickerViewController
- (void)themeNewPickerSectionController:(id)arg1 didSelectTheme:(id)arg2 atIndex:(NSInteger)arg3 {
    if ([SCIManager changeDirectThemeConfirmation]) {
        NSLog(@"[SCInsta] Confirm change direct theme triggered");

        [SCIUtils showConfirmation:^(void) { %orig; }];
    } else {
        return %orig;
    }
}
- (void)themePickerSectionController:(id)arg1 didSelectThemeId:(id)arg2 {
    if ([SCIManager changeDirectThemeConfirmation]) {
        NSLog(@"[SCInsta] Confirm change direct theme triggered");

        [SCIUtils showConfirmation:^(void) { %orig; }];
    } else {
        return %orig;
    }
}
%end
