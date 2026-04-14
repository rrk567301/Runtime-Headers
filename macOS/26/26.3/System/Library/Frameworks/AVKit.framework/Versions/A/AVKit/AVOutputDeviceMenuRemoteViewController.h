@interface AVOutputDeviceMenuRemoteViewController : NSRemoteViewController

@property (copy) id /* block */ viewBridgeConnectionErrorHandler;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)serviceViewControllerInterface;

@end
