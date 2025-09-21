@class NSString, NSDictionary, NSUUID;

@interface HMDEventRouterMessageFragmentationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) char isCachedEventQueue;
@property (readonly, nonatomic) char isFragmented;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIsCachedEventQueue:(char)a0 isFragmented:(char)a1;

@end
