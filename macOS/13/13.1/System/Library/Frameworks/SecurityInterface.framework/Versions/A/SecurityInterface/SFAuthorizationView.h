@interface SFAuthorizationView : NSView {
    id _reserved_SFAuthorizationView;
}

+ (BOOL)containsPasswordOnlyItem:(struct { unsigned int x0; struct *x1; } *)a0;

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setString:(char *)a0;
- (void)setDelegate:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (void)setFlags:(unsigned int)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)buttonPressed:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (void)awakeFromNib;
- (void)windowDidResize:(id)a0;
- (void)windowDidEndSheet:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (id)_ivars;
- (id)authorization;
- (void)setAuthorization:(id)a0;
- (void)_freeRef:(BOOL)a0;
- (void)setAsyncOperation:(BOOL)a0;
- (void)setLAContext:(id)a0;
- (void)setTextButtonTitle:(id)a0;
- (void)setButtonTitleStringAttributes:(id)a0;
- (id)getButtonTitleStringAttributes;
- (void)_reCalcTextButton;
- (void)dispatchDelegateFromAsyncOperation:(BOOL)a0 delegateBlock:(id /* block */)a1;
- (BOOL)_tryState:(int)a0 interactive:(BOOL)a1;
- (void)_createRef;
- (void)_destroyRights;
- (void)reenableButton;
- (void)authorizeInteractively;
- (void)deauthorizeInteractively;
- (BOOL)processRequest:(id /* block */)a0;
- (BOOL)updateStatus:(id)a0;
- (void)setAutoupdate:(BOOL)a0;
- (void)setAutoupdate:(BOOL)a0 interval:(double)a1;
- (void)setAuthorizationRights:(const struct { unsigned int x0; struct *x1; } *)a0;
- (BOOL)authorize:(id)a0;
- (BOOL)deauthorize:(id)a0;
- (void)initiallyLockedOrHidden;
- (struct { unsigned int x0; struct *x1; } *)authorizationRights;
- (int)authorizationState;

@end
