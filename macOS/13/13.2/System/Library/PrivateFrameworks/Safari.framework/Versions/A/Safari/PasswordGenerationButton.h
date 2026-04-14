@class StrongPasswordOptionsMenuItemView, WBSPasswordGenerationManager;
@protocol PasswordGenerationButtonDelegate;

@interface PasswordGenerationButton : NSComboButton {
    long long _style;
}

@property (retain, nonatomic) StrongPasswordOptionsMenuItemView *menuItemView;
@property (weak, nonatomic) id<PasswordGenerationButtonDelegate> delegate;
@property (weak, nonatomic) WBSPasswordGenerationManager *passwordGenerationManager;

+ (id)button;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didSelectPasswordOption:(id)a0;
- (id)_strongPasswordOptionsAutoFillDisplayData;
- (void)_didClickButton:(id)a0;
- (void)_commonPasswordGenerationButtonInit;
- (void)_fillPasswordForCurrentStyle;
- (void)_reloadMenuWithNewPasswords;
- (void)_updateStateOfMenuItems;

@end
