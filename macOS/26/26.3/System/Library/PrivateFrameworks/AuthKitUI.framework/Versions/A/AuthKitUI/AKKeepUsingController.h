@class NSString;

@interface AKKeepUsingController : NSViewController

@property (nonatomic) BOOL isBeingPresented;
@property (retain, nonatomic) NSString *existingAccount;
@property (copy, nonatomic) id /* block */ useExistingAction;
@property (copy, nonatomic) id /* block */ useOtherAction;
@property (nonatomic) long long serviceType;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)keepUsingExistingAccountbuttonPressed:(id)a0;
- (void)presentAlert;
- (void)useOtherAccountButtonPressed:(id)a0;

@end
