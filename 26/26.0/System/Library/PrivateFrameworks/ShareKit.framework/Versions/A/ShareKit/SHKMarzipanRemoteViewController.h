@class SHKRemoteWindowController, NSArray;

@interface SHKMarzipanRemoteViewController : NSRemoteViewController

@property BOOL disconnectRequested;
@property (weak) SHKRemoteWindowController *remoteWindowController;
@property (retain) NSArray *layoutConstraints;

+ (BOOL)viewShouldDragOldestAncestorWindow;
+ (void)requestMarzipanViewControllerForExtensionWithIdentifier:(id)a0 fromServiceWithBundleIdentifier:(id)a1 connectionHandler:(id /* block */)a2;

- (void)disconnect;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;

@end
