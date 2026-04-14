@class NSString, ScreenSaverConfigurationViewController, NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_os_transaction;

@interface ScreenSaverExtensionManager : NSObject

@property (retain) NSMutableArray *viewControllers;
@property (weak) ScreenSaverConfigurationViewController *configurationViewViewController;
@property (retain) NSXPCConnection *connection;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSObject<OS_os_transaction> *osTransaction;
@property BOOL isAnimating;
@property BOOL isPreview;

+ (id)sharedManager;
+ (void)setSharedClassName:(id)a0;

- (void)startAnimation;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopAnimation;
- (void)resumeConnectionWithEndpoint:(id)a0;
- (void)serviceViewControllerDidAwake:(id)a0;
- (void)configurationViewViewControllerDidAwake:(id)a0;
- (id)processExtensionRequest:(id)a0 replyInfo:(id)a1;
- (void)serviceViewControllerDidInvalidate:(id)a0;

@end
