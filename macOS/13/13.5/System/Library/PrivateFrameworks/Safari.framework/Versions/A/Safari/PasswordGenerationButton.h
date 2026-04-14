@class StrongPasswordOptionsMenuItemView, WBSPasswordGenerationManager;
@protocol PasswordGenerationButtonDelegate;

@interface PasswordGenerationButton : NSComboButton {
    long long _style;
}

@property (retain, nonatomic) StrongPasswordOptionsMenuItemView *menuItemView;
@property (weak, nonatomic) id<PasswordGenerationButtonDelegate> delegate;
@property (weak, nonatomic) WBSPasswordGenerationManager *passwordGenerationManager;

+ (id)button;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonPasswordGenerationButtonInit;
- (void)_didClickButton:(id)a0;
- (void)_didSelectPasswordOption:(id)a0;
- (void)_fillPasswordForCurrentStyle;
- (void)_reloadMenuWithNewPasswords;
- (id)_strongPasswordOptionsAutoFillDisplayData;
- (void)_updateStateOfMenuItems;

@end
