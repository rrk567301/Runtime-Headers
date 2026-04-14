@class LUITextField;

@interface LUISafeBootStatusController : LUIController {
    LUITextField *_safeBootTextField;
}

+ (id)controllerWithStyle:(int)a0;

- (id)initWithStyle:(int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_attributedStringFromString:(id)a0;
- (BOOL)_isSafeBoot;
- (void)_setupContentView;

@end
