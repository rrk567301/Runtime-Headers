@interface VUIAppNavigationController : _VUITVAppNavigationController

- (char)validateMenuItem:(id)a0;
- (void)goBack:(id)a0;
- (void)_presentConfirmationViewController:(id)a0 preferredContentSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (char)isSidebarEnabled;
- (void)presentConfirmationDialogWithType:(id)a0;
- (void)presentConfirmationDialogWithType:(id)a0 name:(id)a1;
- (void)presentConfirmationDialogWithType:(id)a0 name:(id)a1 completion:(id /* block */)a2;

@end
