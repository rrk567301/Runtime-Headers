@class QLRemoteViewController;
@protocol QLUIServiceBaseViewControllerProtocol;

@interface QLUIServiceBaseDisplayBundle : QLDisplayBundle

@property (retain) QLRemoteViewController *remoteViewController;
@property (readonly) id<QLUIServiceBaseViewControllerProtocol> serviceViewController;

+ (id)genericServiceCrashError;
+ (id)incompatibleWindowError;

- (id)responder;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)contentLayer;
- (void)windowDidChange;
- (void)doubleClickOnPreviewContent;
- (void)updateFullScreenFromMagnification:(double)a0;
- (id)quickLookLayer;
- (id)serviceCrashError;

@end
