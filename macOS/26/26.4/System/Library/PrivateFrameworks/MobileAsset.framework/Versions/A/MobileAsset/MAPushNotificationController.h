@class NSLock, NSXPCConnection;

@interface MAPushNotificationController : NSObject <MAServiceClientProtocol>

@property (retain) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) NSLock *serviceConnectionLock;
@property (nonatomic) BOOL verboseLogging;

+ (id)sharedInstance;

- (void)subscribedChannelIDsWithCompletion:(id /* block */)a0;
- (void)addSyntheticJobWithType:(id)a0 assetSpecifier:(id)a1 matchingAssetVersion:(id)a2 triggerInterval:(long long)a3;
- (void).cxx_destruct;
- (void)unsubscribeFromAllChannels;
- (id)init;
- (id)_serviceConnection;
- (id)asyncProxy;
- (void)asyncSubscribeToChannelWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)asyncUnsubscribeToChannelWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)didReceivePushNotificationWithInfo:(id)a0;
- (id)pushJobDescriptions;
- (void)subscribeToChannelWithIdentifier:(id)a0;
- (id)subscribedChannelIDs;
- (id)synchronousProxy;
- (void)triggerNotificationWithPayload:(id)a0 withCompletion:(id /* block */)a1;
- (void)unsubscribeToChannelWithIdentifier:(id)a0;

@end
