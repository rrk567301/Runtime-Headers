@protocol MEExtensionRemoteViewControllerDelegate;

@interface MEExtensionRemoteViewController : NSRemoteViewController

@property (weak, nonatomic) id<MEExtensionRemoteViewControllerDelegate> delegate;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;

@end
