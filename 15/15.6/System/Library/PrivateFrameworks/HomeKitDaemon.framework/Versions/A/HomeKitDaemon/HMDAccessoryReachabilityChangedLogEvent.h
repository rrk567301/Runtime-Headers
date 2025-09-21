@class NSString, HMDAccessoryTransportReachabilityReport, NSDictionary, NSUUID, NSNumber;

@interface HMDAccessoryReachabilityChangedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    double _duration;
}

@property (readonly, nonatomic) char accessoryBatteryPowered;
@property (readonly, nonatomic) char accessoryBridged;
@property (readonly, copy, nonatomic) NSString *accessoryCategory;
@property (readonly, copy, nonatomic) NSString *accessoryFirmwareVersion;
@property (readonly, copy, nonatomic) NSString *accessoryManufacturer;
@property (readonly, copy, nonatomic) NSString *accessoryModel;
@property (readonly, copy, nonatomic) NSNumber *accessoryNumber;
@property (readonly, nonatomic) char batteryLow;
@property (readonly, nonatomic) char changed;
@property (readonly, nonatomic) char reachable;
@property (readonly, copy, nonatomic) HMDAccessoryTransportReachabilityReport *transportReport;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithReachable:(char)a0 changed:(char)a1 duration:(double)a2 accessory:(id)a3 transportReport:(id)a4;

- (id)init;
- (void).cxx_destruct;
- (double)duration;
- (id)__initWithReachable:(char)a0 changed:(char)a1 duration:(double)a2 accessory:(id)a3 transportReport:(id)a4;

@end
