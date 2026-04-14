@class NSDate, NSString, NSData, NSUUID, RTLocation, SMCache, SMLocation, SMConversation, NSMutableArray;

@interface SMInitiatorContact : SMContact

@property (retain, nonatomic) SMConversation *conversation;
@property (copy, nonatomic) NSDate *shouldBeCleanedUpDate;
@property (retain, nonatomic) NSDate *keyReleaseMessageSendDate;
@property (nonatomic) BOOL cloudkitShareZoneCleanedUpSuccessfully;
@property (copy, nonatomic) NSDate *scheduledSendExpiryDate;
@property (copy, nonatomic) NSString *scheduleSendMessageGUID;
@property (retain, nonatomic) SMLocation *unlockLocation;
@property (retain, nonatomic) SMLocation *lockLocation;
@property (retain, nonatomic) SMLocation *startingLocation;
@property (retain, nonatomic) SMLocation *offWristLocation;
@property (retain, nonatomic) SMLocation *parkedCarLocation;
@property (copy, nonatomic) NSData *destinationMapItem;
@property (readonly, nonatomic) SMCache *cache;
@property (retain, nonatomic) SMCache *phoneCache;
@property (retain, nonatomic) SMCache *watchCache;
@property (copy, nonatomic) NSDate *timeCacheUploadCompletion;
@property (retain, nonatomic) RTLocation *locationOfTrigger;
@property (copy, nonatomic) NSDate *triggerDate;
@property (copy, nonatomic) NSDate *cacheUpdateBackstopExpiryDate;
@property (copy, nonatomic) NSMutableArray *workoutEvents;
@property (nonatomic) double maxCacheSize;
@property (nonatomic) long long maxLocationsInTrace;
@property (nonatomic) double maxTimeBetweenCacheUpdates;
@property (nonatomic) long long numCacheUpdates;
@property (nonatomic) double timeTilCacheRelease;
@property (nonatomic) long long numberOfSuccessfulCacheUpdates;
@property (nonatomic) long long numberOfMessageCancelling;
@property (nonatomic) long long numberOfSuccessfulMessageCancelling;
@property (nonatomic) long long numberOfMessageScheduling;
@property (nonatomic) long long numberOfSuccessfulMessageScheduling;
@property (nonatomic) BOOL wasCacheReleased;
@property (nonatomic) BOOL wasScheduledSendTriggered;
@property (nonatomic) BOOL lockState;
@property (nonatomic) long long numberOfHandoffBecomingActive;
@property (nonatomic) long long numberOfHandoffBecomingNonActive;
@property (copy, nonatomic) NSUUID *earliestActiveDeviceIdentifier;
@property (copy, nonatomic) NSUUID *latestActiveDeviceIdentifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 conversation:(id)a1 shouldBeCleanedUpDate:(id)a2 cloudkitShareZoneCleanedUpSuccessfully:(BOOL)a3 syncDate:(id)a4 keyReleaseMessageSendDate:(id)a5 scheduledSendExpiryDate:(id)a6 phoneCache:(id)a7 watchCache:(id)a8 sessionID:(id)a9 safetyCacheKey:(id)a10 allowReadToken:(id)a11 scheduleSendMessageGUID:(id)a12 unlockLocation:(id)a13 lockLocation:(id)a14 startingLocation:(id)a15 offWristLocation:(id)a16 parkedCarLocation:(id)a17 destinationMapItem:(id)a18 timeCacheUploadCompletion:(id)a19 maxCacheSize:(double)a20 maxLocationsInTrace:(long long)a21 maxTimeBetweenCacheUpdates:(double)a22 numCacheUpdates:(long long)a23 timeTilCacheRelease:(double)a24 numberOfSuccessfulCacheUpdates:(long long)a25 numberOfMessageCancelling:(long long)a26 numberOfSuccessfulMessageCancelling:(long long)a27 numberOfMessageScheduling:(long long)a28 numberOfSuccessfulMessageScheduling:(long long)a29 wasCacheReleased:(BOOL)a30 wasScheduledSendTriggered:(BOOL)a31 locationOfTrigger:(id)a32 triggerDate:(id)a33 lockState:(BOOL)a34 cacheUpdateBackstopExpiryDate:(id)a35 workoutEvents:(id)a36 numberOfHandoffBecomingActive:(long long)a37 numberOfHandoffBecomingNonActive:(long long)a38 earliestActiveDeviceIdentifier:(id)a39 latestActiveDeviceIdentifier:(id)a40;

@end
