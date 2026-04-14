@protocol FPUIActionRemoteViewControllerDelegate;

@interface FPUIActionRemoteViewController : NSRemoteViewController

@property (weak, nonatomic) id<FPUIActionRemoteViewControllerDelegate> delegate;

- (id)exportedInterface;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)serviceViewControllerInterface;

@end
