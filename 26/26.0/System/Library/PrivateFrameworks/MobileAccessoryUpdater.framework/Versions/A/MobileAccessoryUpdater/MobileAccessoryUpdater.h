@class NSString, NSObject;
@protocol FudConnection, OS_dispatch_queue_attr, OS_dispatch_queue, MobileAccessoryUpdaterDelegate;

@interface MobileAccessoryUpdater : NSObject {
    id<MobileAccessoryUpdaterDelegate> _delegate;
    id<FudConnection> _connection;
    NSString *_bundleIdentifier;
    NSString *_clientIdentifier;
    char *_cClientIdentifier;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue_attr> *_attr;
    NSString *_activeFilter;
    BOOL _isInternalClient;
    BOOL _didUnregister;
}

- (void)unregister;
- (void)doneWithOptions:(id)a0;
- (id)bundleIdentifier;
- (BOOL)loadPluginWithAccessoryInfo:(id)a0 options:(id)a1;
- (void)createConnection;
- (void)dealloc;
- (id)getActiveDeviceClass;
- (id)clientIdentifier;
- (const char *)getActiveDeviceClassCString;
- (id)initWithGroupIdentifer:(id)a0 delegate:(id)a1 options:(id)a2 error:(id *)a3;
- (void)performStep:(id)a0 withOptions:(id)a1;
- (BOOL)setLastRemoteFindDate:(id)a0;
- (id)activeFilter;
- (id)queryNextStep:(id *)a0;
- (id)getPluginsList;
- (BOOL)setActiveDeviceClass:(id)a0;
- (id)initWithPluginIdentifier:(id)a0 delegate:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)sendMessageForCommand:(int)a0 withOptions:(id)a1 replyHandler:(id /* block */)a2;
- (id)initWithPluginIdentifier:(id)a0 isGroupIdentifier:(BOOL)a1 delegate:(id)a2 isInternalClient:(BOOL)a3 options:(id)a4 error:(id *)a5;
- (BOOL)registerForIdentifier:(id)a0 isGroupIdentifier:(BOOL)a1;
- (void)performNextStepWithOptions:(id)a0;
- (id)initWithDelegate:(id)a0 isInternalClient:(BOOL)a1 options:(id)a2 error:(id *)a3;

@end
