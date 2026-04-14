@class FMXPCServiceDescription, FMXPCSession, NSObject;
@protocol OS_dispatch_queue, SPSecureLocationsXPCProtocol;

@interface SPSecureLocationsManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPSecureLocationsXPCProtocol> proxy;

+ (id)remoteInterface;
+ (id)featureDisabledError;

- (void)setLocationUpdateBlock:(id /* block */)a0;
- (void)shouldStartLocationMonitorWithCompletion:(id /* block */)a0;
- (void)latestLocationFromCacheForId:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringFailedSubscriptions:(id /* block */)a0;
- (void)subscribeAndFetchLocationForIds:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)processIDSServiceMessage:(id)a0 completion:(id /* block */)a1;
- (void)getAllSharedKeysWithCompletion:(id /* block */)a0;
- (void)receivedLocationPayload:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeForIds:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)setSharingKey:(id)a0 completion:(id /* block */)a1;
- (void)isLocationPublishingDeviceWithCompletion:(id /* block */)a0;
- (void)shareCurrentKeyWithId:(id)a0 idsHandles:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)getSharingKeyWithCompletion:(id /* block */)a0;
- (void)shareCurrentKeyWithId:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeForId:(id)a0 clientApp:(id)a1 completion:(id /* block */)a2;
- (void)fetchConfigFromServerWithCompletion:(id /* block */)a0;
- (void)updateLocationCacheWith:(id)a0 completion:(id /* block */)a1;
- (void)simulateFeatureDisabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)subscribeAndFetchLocationForIds:(id)a0 clientApp:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void)publishLocation:(id)a0 completion:(id /* block */)a1;
- (void)receivedLocationCommand:(id)a0 completion:(id /* block */)a1;
- (void)performKeyRollWithCompletion:(id /* block */)a0;

@end
