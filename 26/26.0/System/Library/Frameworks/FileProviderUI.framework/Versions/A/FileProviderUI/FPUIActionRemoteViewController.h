@protocol FPUIActionRemoteViewControllerDelegate;

@interface FPUIActionRemoteViewController : NSRemoteViewController

@property (weak, nonatomic) id<FPUIActionRemoteViewControllerDelegate> delegate;

- (id)exportedInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;

@end
