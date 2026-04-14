@protocol CNEditAuthorizationViewControllerDelegate;

@interface CNDelegateRetainingEditAuthorizationViewController : CNEditAuthorizationViewController

@property (retain, nonatomic) id<CNEditAuthorizationViewControllerDelegate> delegateRetainedDuringAuthorization;

- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (void)didNotAuthorize;
- (void)didAuthorize;

@end
