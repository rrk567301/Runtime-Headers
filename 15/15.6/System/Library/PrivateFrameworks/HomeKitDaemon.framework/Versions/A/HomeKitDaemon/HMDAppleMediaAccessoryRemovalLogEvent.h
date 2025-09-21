@class NSString, NSDictionary, NSUUID;

@interface HMDAppleMediaAccessoryRemovalLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) char isLocalRemoval;
@property (readonly, nonatomic) char isLocalFallback;
@property (readonly, nonatomic) char isDuplicate;
@property (readonly, nonatomic) long long duplicateCount;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIsLocalRemoval:(char)a0 isLocalFallback:(char)a1 isDuplicate:(char)a2 duplicateCount:(long long)a3;

@end
