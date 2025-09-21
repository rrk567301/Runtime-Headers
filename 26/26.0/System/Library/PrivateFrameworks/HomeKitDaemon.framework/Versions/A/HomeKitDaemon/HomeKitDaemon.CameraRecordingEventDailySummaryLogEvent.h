@class NSString, NSDictionary;

@interface HomeKitDaemon.CameraRecordingEventDailySummaryLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ numRecordingSessions;
    void /* unknown type, empty encoding */ numClipUploads;
    void /* unknown type, empty encoding */ totalClipDurationInMilliseconds;
    void /* unknown type, empty encoding */ isHouseholdLogEvent;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;

- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
