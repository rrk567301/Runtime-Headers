@class NSObject, NSString, BSServiceInterface, BSServiceConnection, BSServiceQuality, BSServiceConnectionEndpoint;
@protocol OS_dispatch_queue;

@interface FBSServiceFacilityClient : NSObject <FBSServiceFacilityClientConfiguring, FBSServiceFacilityClientMessaging, BSInvalidatable> {
    BSServiceConnectionEndpoint *_endpoint;
    NSString *_facilityID;
    BSServiceInterface *_interface;
    id _configOnly_interfaceTarget;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSServiceConnection *_lock_connection;
    char _lock_connectionDenied;
    char _lock_activated;
    char _lock_invalidated;
    char _uisHack;
}

@property (class, readonly, nonatomic) BSServiceConnectionEndpoint *defaultShellEndpoint;

@property (readonly, nonatomic, getter=isConfigured) char configured;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BSServiceQuality *serviceQuality;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)setIdentifier:(id)a0;
- (void)setEndpoint:(id)a0;
- (char)_isValid;
- (void)setInterface:(id)a0;
- (void)handleError:(id)a0;
- (void)_lock_activate;
- (void)_lock_invalidate;
- (void)_queue_handleError:(id)a0;
- (void)_queue_handleMessage:(id)a0;
- (void)configureConnectMessage:(id)a0;
- (void)handleMessage:(id)a0 withType:(long long)a1;
- (id)initWithConfigurator:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 calloutQueue:(id)a1;
- (void)sendMessage:(id)a0 withType:(long long)a1;
- (void)sendMessage:(id)a0 withType:(long long)a1 replyHandler:(id /* block */)a2 waitForReply:(char)a3 timeout:(double)a4;
- (void)setCalloutQueue:(id)a0;
- (void)setInterfaceTarget:(id)a0;
- (void)setServiceQuality:(id)a0;

@end
