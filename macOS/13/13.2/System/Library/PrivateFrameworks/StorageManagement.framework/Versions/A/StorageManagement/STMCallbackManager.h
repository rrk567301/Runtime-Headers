@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface STMCallbackManager : NSObject

@property (copy) NSString *bundleIdentifier;
@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)resumeConnectionWithEndpoint:(id)a0;
- (void)sendPartialResourceItems:(id)a0;
- (void)notifyResourcesDidChange:(id)a0;
- (void)notifyTipsDidChange:(id)a0;
- (void)notifyTotalSpaceUsedDidChange:(long long)a0;

@end
