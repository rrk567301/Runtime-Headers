@class SHKRemoteWindowController, NSString;

@interface SHKRemoteViewController : NSRemoteViewController <SHKClientDelegate>

@property BOOL disconnectRequested;
@property (weak) SHKRemoteWindowController *remoteWindowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)viewShouldDragOldestAncestorWindow;
+ (void)requestViewControllerFromServiceWithBundleIdentifier:(id)a0 withConnectionHandler:(id /* block */)a1;

- (void)disconnect;
- (id)exportedInterface;
- (id)exportedObject;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)serviceViewControllerInterface;
- (void)cancelServiceUI;
- (void)setViewOptions:(id)a0;

@end
