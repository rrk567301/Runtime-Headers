@protocol MEExtensionRemoteViewControllerDelegate;

@interface MEExtensionRemoteViewController : NSRemoteViewController

@property (weak, nonatomic) id<MEExtensionRemoteViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)serviceViewControllerInterface;

@end
