@class RPBroadcastActivityViewController;

@interface RPBroadcastActivityHostViewController : NSRemoteViewController <RPBroadcastActivityCommunicationHostProtocol>

@property (weak, nonatomic) RPBroadcastActivityViewController *broadcastActivityViewController;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (oneway void)extensionDidFinishWithLaunchURL:(id)a0 broadcastURL:(id)a1 extensionBundleID:(id)a2 cancelled:(BOOL)a3;

@end
