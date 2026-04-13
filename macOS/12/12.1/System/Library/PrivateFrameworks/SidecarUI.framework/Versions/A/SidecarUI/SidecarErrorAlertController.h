@interface SidecarErrorAlertController : SidecarAlertController

+ (id)alertControllerWithRequest:(id)a0;

- (void)loadWindow;
- (id)initWithRequest:(id)a0;
- (BOOL)autoDismissOnFinished;
- (BOOL)showErrorOnFinished;
- (id)_errorController;

@end
