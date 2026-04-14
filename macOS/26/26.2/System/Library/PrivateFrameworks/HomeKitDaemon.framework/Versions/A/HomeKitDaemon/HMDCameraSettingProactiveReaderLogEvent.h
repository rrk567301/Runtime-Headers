@class NSString, NSDictionary;

@interface HMDCameraSettingProactiveReaderLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (nonatomic, readonly) long long availableStreamHandlerCount;
@property (nonatomic, readonly) long long inUseStreamHandlerCount;
@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;

- (id)init;
- (id)initWithStartTime:(double)a0;
- (id)initWithAvailableStreamHandlerCount:(long long)a0 inUseStreamHandlerCount:(long long)a1;

@end
