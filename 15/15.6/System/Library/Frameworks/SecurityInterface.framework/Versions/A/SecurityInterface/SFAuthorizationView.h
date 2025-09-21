@interface SFAuthorizationView : NSView {
    id _reserved_SFAuthorizationView;
}

+ (char)containsPasswordOnlyItem:(struct { unsigned int x0; struct *x1; } *)a0;

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)setEnabled:(char)a0;
- (void)setHidden:(char)a0;
- (void)setString:(char *)a0;
- (char)isEnabled;
- (void)setFlags:(unsigned int)a0;
- (void)awakeFromNib;
- (void)buttonPressed:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowDidEndSheet:(id)a0;
- (void)windowDidResize:(id)a0;
- (id)authorization;
- (void)setAuthorization:(id)a0;
- (char)_isHighContrast;
- (void)setButtonTitleStringAttributes:(id)a0;
- (char)processRequest:(id /* block */)a0;
- (void)_createRef;
- (void)_destroyRights;
- (void)_freeRef:(char)a0;
- (id)_ivars;
- (void)_reCalcTextButton;
- (char)_tryState:(int)a0 interactive:(char)a1;
- (struct { unsigned int x0; struct *x1; } *)authorizationRights;
- (int)authorizationState;
- (char)authorize:(id)a0;
- (void)authorizeInteractively;
- (char)deauthorize:(id)a0;
- (void)deauthorizeInteractively;
- (void)dispatchDelegateFromAsyncOperation:(char)a0 delegateBlock:(id /* block */)a1;
- (id)getButtonTitleStringAttributes;
- (void)initiallyLockedOrHidden;
- (void)reenableButton;
- (void)setAsyncOperation:(char)a0;
- (void)setAuthorizationRights:(const struct { unsigned int x0; struct *x1; } *)a0;
- (void)setAutoupdate:(char)a0;
- (void)setAutoupdate:(char)a0 interval:(double)a1;
- (void)setLAContext:(id)a0;
- (void)setTextButtonTitle:(id)a0;
- (char)updateStatus:(id)a0;

@end
