@protocol FPUIActionRemoteViewControllerDelegate;

@interface FPUIActionRemoteViewController : NSRemoteViewController

@property (weak, nonatomic) id<FPUIActionRemoteViewControllerDelegate> delegate;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end
