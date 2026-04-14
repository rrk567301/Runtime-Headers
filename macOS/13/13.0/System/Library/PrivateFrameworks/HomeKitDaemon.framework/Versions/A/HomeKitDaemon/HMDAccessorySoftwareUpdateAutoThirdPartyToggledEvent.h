@class NSString, NSDictionary;

@interface HMDAccessorySoftwareUpdateAutoThirdPartyToggledEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) BOOL autoThirdPartySoftwareUpdateEnable;
@property (readonly) unsigned long long numHAPAccessories;
@property (readonly) unsigned long long numCameraAccessories;
@property (readonly) unsigned long long numCameraAccessoriesRecordingEnabled;
@property (readonly) unsigned long long numSecurityClassAccessories;
@property (readonly) unsigned long long numCriticalSensorAccessories;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;

- (id)initWithAutoThirdPartyUpdateEnable:(BOOL)a0 numHAPAccessories:(unsigned long long)a1 numCameraAccessories:(unsigned long long)a2 numCameraAccessoriesRecordingEnabled:(unsigned long long)a3 numSecurityClassAccessories:(unsigned long long)a4 numCriticalSensorAccessories:(unsigned long long)a5;

@end
