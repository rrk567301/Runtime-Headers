@class FMXPCServiceDescription, FMXPCSession, NSObject;
@protocol OS_dispatch_queue, SPSecureLocationsXPCProtocol;

@interface SPSecureLocationsManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPSecureLocationsXPCProtocol> proxy;

+ (id)featureDisabledError;
+ (id)remoteInterface;

- (void)setLocationUpdateBlock:(id /* block */)a0;
- (void)updateLocationCacheWith:(id)a0 completion:(id /* block */)a1;
- (void)getAllSharedKeysWithCompletion:(id /* block */)a0;
- (void)shareCurrentKeyWithId:(id)a0 completion:(id /* block */)a1;
- (void)shouldStartLocationMonitorWithCompletion:(id /* block */)a0;
- (void)subscribeAndFetchLocationForIds:(id)a0 clientApp:(id)a1 completion:(id /* block */)a2;
- (void)receivedLocationPayload:(id)a0 completion:(id /* block */)a1;
- (void)isLocationPublishingDeviceWithCompletion:(id /* block */)a0;
- (void)unsubscribeForIds:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)subscribeAndFetchLocationForIds:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)performKeyRollWithCompletion:(id /* block */)a0;
- (void)publishLocation:(id)a0 completion:(id /* block */)a1;
- (void)processIDSServiceMessage:(id)a0 completion:(id /* block */)a1;
- (void)fetchConfigFromServerWithCompletion:(id /* block */)a0;
- (void)latestLocationFromCacheForId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setSharingKey:(id)a0 completion:(id /* block */)a1;
- (void)receivedLocationCommand:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringFailedSubscriptions:(id /* block */)a0;
- (void)simulateFeatureDisabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)unsubscribeForId:(id)a0 clientApp:(id)a1 completion:(id /* block */)a2;
- (void)shareCurrentKeyWithId:(id)a0 idsHandles:(id)a1 completion:(id /* block */)a2;
- (void)getSharingKeyWithCompletion:(id /* block */)a0;
- (id)init;

@end
