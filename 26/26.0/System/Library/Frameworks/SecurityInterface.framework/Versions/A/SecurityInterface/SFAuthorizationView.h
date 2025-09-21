@interface SFAuthorizationView : NSView {
    id _reserved_SFAuthorizationView;
}

+ (BOOL)containsPasswordOnlyItem:(struct { unsigned int x0; struct *x1; } *)a0;

- (void)windowDidResize:(id)a0;
- (void)windowDidEndSheet:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (void)setAuthorization:(id)a0;
- (id)authorization;
- (void)viewWillMoveToWindow:(id)a0;
- (void)setFlags:(unsigned int)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (BOOL)isEnabled;
- (void)setLAContext:(id)a0;
- (int)authorizationState;
- (void)setEnabled:(BOOL)a0;
- (void)setString:(char *)a0;
- (id)init;
- (void)viewDidMoveToWindow;
- (id)delegate;
- (void)viewDidChangeEffectiveAppearance;
- (void)setHidden:(BOOL)a0;
- (void)awakeFromNib;
- (void)buttonPressed:(id)a0;
- (BOOL)_isHighContrast;
- (void)_createRef;
- (BOOL)processRequest:(id /* block */)a0;
- (void)setButtonTitleStringAttributes:(id)a0;
- (void)_destroyRights;
- (void)_freeRef:(BOOL)a0;
- (id)_ivars;
- (void)_reCalcTextButton;
- (BOOL)_tryState:(int)a0 interactive:(BOOL)a1;
- (struct { unsigned int x0; struct *x1; } *)authorizationRights;
- (BOOL)authorize:(id)a0;
- (void)authorizeInteractively;
- (BOOL)deauthorize:(id)a0;
- (void)deauthorizeInteractively;
- (void)dispatchDelegateFromAsyncOperation:(BOOL)a0 delegateBlock:(id /* block */)a1;
- (id)getButtonTitleStringAttributes;
- (void)initiallyLockedOrHidden;
- (void)reenableButton;
- (void)setAsyncOperation:(BOOL)a0;
- (void)setAuthorizationRights:(const struct { unsigned int x0; struct *x1; } *)a0;
- (void)setAutoupdate:(BOOL)a0;
- (void)setAutoupdate:(BOOL)a0 interval:(double)a1;
- (void)setTextButtonTitle:(id)a0;
- (BOOL)updateStatus:(id)a0;

@end
