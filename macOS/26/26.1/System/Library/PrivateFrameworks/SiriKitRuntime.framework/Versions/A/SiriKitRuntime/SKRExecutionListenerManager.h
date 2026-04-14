@class SKRSharedFlowPluginXPCServer, ENCEncoreServiceLauncher;

@interface SKRExecutionListenerManager : NSObject

@property (readonly, nonatomic) SKRSharedFlowPluginXPCServer *sharedPluginServer;
@property (readonly, nonatomic) ENCEncoreServiceLauncher *encoreServiceLauncher;

- (void).cxx_destruct;
- (id)init;

@end
