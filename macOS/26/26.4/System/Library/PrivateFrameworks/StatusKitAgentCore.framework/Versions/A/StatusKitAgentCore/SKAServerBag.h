@class NSString;

@interface SKAServerBag : NSObject <SKAServerBagProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (BOOL)presenceEnabledByServer;
- (double)statusValidityForOffGridPayload;
- (long long)hardMaxSubscriptionCount;
- (BOOL)keysharingIsDisabledByServer;
- (id)largePersistentPayloadSize;
- (id)largePresencePayloadSize;
- (double)maxPersistentPayloadTTLSeconds;
- (long long)maxPresenceSubscriptionCacheCount;
- (long long)maxRapidPublishes;
- (long long)maxRequestsForKey:(id)a0 defaultMaxRequests:(long long)a1;
- (long long)maxSubscriptionCacheCount;
- (id)numberForPublishKey:(id)a0;
- (id)persistentPayloadSize;
- (BOOL)preferPhoneNumbers;
- (long long)presenceCryptoRollResetTime;
- (BOOL)presenceEnabledByServerForServiceIdentifier:(id)a0;
- (id)presencePayloadSize;
- (BOOL)presenceReverseInviteEnabledByServer;
- (double)presenceSubscriptionTTL;
- (double)publishPendingRequestDelayTime;
- (long long)publishPendingRequestMaxRetryCount;
- (double)rapidPublishesTimescale;
- (double)rateLimitDelayTime;
- (long long)requestResetTimeForKey:(id)a0 defaultResetTime:(long long)a1;
- (double)scheduledPublishMaxDelayTime;
- (double)secondaryDeviceRepublishMaxDelayTime;
- (double)secondaryDeviceRepublishMinDelayTime;
- (BOOL)selfSharingIsDisabledByServer;
- (unsigned long long)serverResponseInternalErrorRetryCount;
- (BOOL)sharedChannelsIsDisabledByServer;
- (BOOL)statusEnabledByServerForStatusTypeIdentifier:(id)a0;
- (double)statusSubscriptionTTL;
- (double)timeIntervalForPublishKey:(id)a0 withDefaultValue:(double)a1;
- (double)unscheduledPublishMaxDelayTime;

@end
