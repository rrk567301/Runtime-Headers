@class NSString, NSDictionary;

@interface HomeKitDaemon.TemperatureHumidityReadWriteLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ readWriteEvent;
    void /* function */ coreAnalyticsEventName;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
