@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationDataModel, PKPaymentAuthorizationCoreViewController, PKPaymentAuthorizationDataController, NSString;

@interface PKPaymentAuthorizationChildViewController : NSViewController <PKPaymentAuthorizationStateMachineDelegate>

@property (readonly, nonatomic) PKPaymentAuthorizationCoreViewController *coreViewController;
@property (readonly, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout;
@property (readonly, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine;
@property (readonly, nonatomic) PKPaymentAuthorizationDataModel *dataModel;
@property (readonly, nonatomic) PKPaymentAuthorizationDataController *dataController;
@property (readonly, nonatomic) BOOL shouldActivateOnDidBecomeActive;
@property (readonly, nonatomic) BOOL shouldDeactivateOnDidResign;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayout;
- (void)preflight;
- (void)didBecomeInactiveViewController;
- (void)dataModelDidUpdate;
- (void)didBecomeActiveViewController;
- (void)didDismiss;
- (void)willBecomeActiveViewController;
- (void)willBecomeInactiveViewController;

@end
