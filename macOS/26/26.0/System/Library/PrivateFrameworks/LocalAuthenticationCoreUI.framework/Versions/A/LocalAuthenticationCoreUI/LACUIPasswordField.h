@class NSString;
@protocol LACUIPasswordFieldDelegate;

@interface LACUIPasswordField : LACUISecureTextField <LACUITextFieldDelegate> {
    BOOL _isTextFieldFirstResponder;
}

@property (weak, nonatomic) id<LACUIPasswordFieldDelegate> passwordFieldDelegate;
@property (nonatomic) long long style;
@property (nonatomic) BOOL tabNavigationDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlTextDidChange:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setup;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void)doCommandBySelector:(SEL)a0;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_passwordDidChange;
- (void)_setupPlainStyle;
- (void)setIsTextFieldFirstResponder:(BOOL)a0;

@end
