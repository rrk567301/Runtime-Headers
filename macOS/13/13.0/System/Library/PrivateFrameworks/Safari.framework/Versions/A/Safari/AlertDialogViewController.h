@class AlertDialogConfiguration, NSString, NSTimer;

@interface AlertDialogViewController : TabDialogViewController <AlertDialogViewDelegate> {
    NSTimer *_enableReturnEnterKeyTimer;
    BOOL _waitForKeyPressDone;
    BOOL _returnEnterKeyInitiallyDown;
    BOOL _seenNonInitialReturnEnterKeyDown;
}

@property (readonly, nonatomic) AlertDialogConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *dialogMessage;

+ (long long)alertDialogResultFromInteger:(long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (id)initWithNibName:(id)a0 bundle:(id)a1 dialogConfiguration:(id)a2 slot:(struct { int x0; unsigned long long x1; })a3;
- (void)didDismissAlertDialogView:(id)a0;
- (void)didAcceptAlertDialogView:(id)a0 withPromptResponse:(id)a1;
- (void)didRejectAlertDialogView:(id)a0;
- (id)initWithDialogConfiguration:(id)a0 slot:(struct { int x0; unsigned long long x1; })a1;
- (id)_alertDialogView;
- (void)_invalidateReturnEnterTimer;
- (void)_ignoreKeyPressesIfNecessary;
- (void)_handleEvent:(id)a0 eventIsInitialEvent:(BOOL)a1;
- (id)_makeResponseWithResult:(long long)a0 promptResponse:(id)a1;
- (id)_nextValidKeyViewForAlertDialogView:(id)a0;

@end
