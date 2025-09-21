@interface AVOutputDeviceMenuRemoteViewController : NSRemoteViewController

@property (copy) id /* block */ viewBridgeConnectionErrorHandler;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;

@end
