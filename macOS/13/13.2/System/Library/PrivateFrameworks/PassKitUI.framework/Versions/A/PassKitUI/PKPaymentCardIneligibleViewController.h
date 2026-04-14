@class PKPaymentSetupViewController, NSURL;
@protocol PKPaymentSetupDelegate;

@interface PKPaymentCardIneligibleViewController : NSViewController

@property (nonatomic) long long reason;
@property (nonatomic) long long context;
@property (weak, nonatomic) PKPaymentSetupViewController *setupVC;
@property (weak, nonatomic) id<PKPaymentSetupDelegate> setupDelegate;
@property (retain, nonatomic) NSURL *learnMoreURL;

- (void).cxx_destruct;
- (void)beginSheetInWindow:(id)a0 completion:(id /* block */)a1;

@end
