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

- (void)doCommandBySelector:(SEL)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)_setup;
- (id)initWithCoder:(id)a0;
- (void)updateLayer;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)controlTextDidChange:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_passwordDidChange;
- (void)_setupPlainStyle;
- (void)setIsTextFieldFirstResponder:(BOOL)a0;

@end
