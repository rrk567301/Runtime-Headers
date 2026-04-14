@class NSString, AppleTextInputMenu, NSButton;

@interface LUIIMStatusController : LUIController <NSMenuDelegate> {
    AppleTextInputMenu *_textInputMenu;
    NSButton *_textInputButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (id)initWithStyle:(int)a0;
- (void)tearDownController;
- (void)_setupContentView;
- (void)_buttonPressed:(id)a0;
- (void)_handleTIMChange:(id)a0;
- (id)_textInputMenu;
- (BOOL)_shouldShowInputMenu;
- (void)_handleTISSelection:(id)a0;

@end
