@class NSString;

@interface AKKeepUsingController : NSViewController

@property (nonatomic) BOOL isBeingPresented;
@property (retain, nonatomic) NSString *existingAccount;
@property (copy, nonatomic) id /* block */ useExistingAction;
@property (copy, nonatomic) id /* block */ useOtherAction;
@property (nonatomic) long long serviceType;

- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)keepUsingExistingAccountbuttonPressed:(id)a0;
- (void)presentAlert;
- (void)useOtherAccountButtonPressed:(id)a0;

@end
