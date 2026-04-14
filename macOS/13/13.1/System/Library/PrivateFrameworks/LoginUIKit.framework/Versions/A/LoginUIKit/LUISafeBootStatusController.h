@class LUITextField;

@interface LUISafeBootStatusController : LUIController {
    LUITextField *_safeBootTextField;
}

+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (id)initWithStyle:(int)a0;
- (void)_setupContentView;
- (id)_attributedStringFromString:(id)a0;
- (BOOL)_isSafeBoot;

@end
