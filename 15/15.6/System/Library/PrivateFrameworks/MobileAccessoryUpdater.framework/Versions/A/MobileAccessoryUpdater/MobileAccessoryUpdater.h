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
    char _isInternalClient;
    char _didUnregister;
}

- (void)dealloc;
- (id)bundleIdentifier;
- (void)unregister;
- (id)clientIdentifier;
- (void)createConnection;
- (id)activeFilter;
- (void)doneWithOptions:(id)a0;
- (id)getActiveDeviceClass;
- (const char *)getActiveDeviceClassCString;
- (id)getPluginsList;
- (id)initWithDelegate:(id)a0 isInternalClient:(char)a1 options:(id)a2 error:(id *)a3;
- (id)initWithGroupIdentifer:(id)a0 delegate:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWithPluginIdentifier:(id)a0 delegate:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWithPluginIdentifier:(id)a0 isGroupIdentifier:(char)a1 delegate:(id)a2 isInternalClient:(char)a3 options:(id)a4 error:(id *)a5;
- (char)loadPluginWithAccessoryInfo:(id)a0 options:(id)a1;
- (void)performNextStepWithOptions:(id)a0;
- (void)performStep:(id)a0 withOptions:(id)a1;
- (id)queryNextStep:(id *)a0;
- (char)registerForIdentifier:(id)a0 isGroupIdentifier:(char)a1;
- (char)setActiveDeviceClass:(id)a0;
- (char)setLastRemoteFindDate:(id)a0;

@end
