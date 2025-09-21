@class HTTPAuthenticationDialogConfiguration;

@interface HTTPAuthenticationDialogViewController : TabDialogViewController <HTTPAuthenticationDialogViewDelegate>

@property (readonly, nonatomic) HTTPAuthenticationDialogConfiguration *configuration;

- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)didDismissHTTPAuthenticationDialogView:(id)a0;
- (void)didSubmitHTTPAuthenticationDialogView:(id)a0;
- (id)initWithDialogConfiguration:(id)a0 slot:(struct { int x0; unsigned long long x1; })a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1 dialogConfiguration:(id)a2 slot:(struct { int x0; unsigned long long x1; })a3;

@end
