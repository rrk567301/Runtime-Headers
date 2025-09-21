@class NSView, NSLayoutConstraint, SFAuthorizationPluginView, LUI2View;

@interface LUI2AuthorizationPluginViewController : LUI2PasswordViewController

@property (retain) LUI2View *containerView;
@property (retain) NSLayoutConstraint *containerViewWidthConstraint;
@property (retain) NSLayoutConstraint *containerViewHeightConstraint;
@property int viewTypeInternal;
@property (retain) NSView *authPluginView;
@property (readonly) SFAuthorizationPluginView *authorizationPluginView;
@property int viewType;

- (void)updateView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)setButton:(int)a0 enabled:(BOOL)a1;
- (void)_updateView;
- (id)initWithAuthorizationPluginView:(id)a0;
- (id)viewForPopover;

@end
