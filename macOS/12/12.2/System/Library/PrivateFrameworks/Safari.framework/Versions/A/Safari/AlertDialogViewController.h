@class AlertDialogConfiguration, NSString;

@interface AlertDialogViewController : TabDialogViewController <AlertDialogViewDelegate>

@property (readonly, nonatomic) AlertDialogConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *dialogMessage;

+ (long long)alertDialogResultFromInteger:(long long)a0;

- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)didDismissAlertDialogView:(id)a0;
- (void)didAcceptAlertDialogView:(id)a0 withPromptResponse:(id)a1;
- (void)didRejectAlertDialogView:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 dialogConfiguration:(id)a2 slot:(struct { int x0; unsigned long long x1; })a3;
- (id)_nextValidKeyViewForAlertDialogView:(id)a0;
- (id)_makeResponseWithResult:(long long)a0 promptResponse:(id)a1;
- (id)initWithDialogConfiguration:(id)a0 slot:(struct { int x0; unsigned long long x1; })a1;

@end
