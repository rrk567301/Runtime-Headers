@class NWAccumulator, NSString, NSArray, SFPrivacyProxyTraffic;

@interface SFDeviceReport : NSObject

@property (nonatomic) unsigned char timestampBucket;
@property (nonatomic) unsigned int batteryPercentage;
@property (nonatomic) unsigned int batteryCurrentCapacity;
@property (nonatomic) unsigned int batteryMaximumCapacity;
@property (nonatomic) unsigned int batteryDesignCapacity;
@property (nonatomic) unsigned int batteryAbsoluteCapacity;
@property (nonatomic) unsigned int batteryRawCurrentCapacity;
@property (nonatomic) unsigned int batteryRawMaximumCapacity;
@property (nonatomic) unsigned int batteryDepthOfDischarge;
@property (nonatomic) unsigned int batteryVoltage;
@property (nonatomic) unsigned int batteryTimeRemaining;
@property (nonatomic) int batteryTemperature;
@property (nonatomic) char batteryExternalPowerIsConnected;
@property (nonatomic) char batteryIsCharging;
@property (nonatomic) char batteryFullyCharged;
@property (nonatomic) char batteryAtWarnLevel;
@property (nonatomic) char batteryAtCriticalLevel;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic) char devicePluggedIn;
@property (nonatomic) char deviceScreenOn;
@property (nonatomic) unsigned int deviceScreenBrightness;
@property (nonatomic) unsigned int deviceOrientation;
@property (nonatomic) unsigned int thermalPressure;
@property (retain, nonatomic) NWAccumulator *batteryAccumulator;
@property (nonatomic) char quicExperimentallyEnabled;
@property (nonatomic) char unifiedStackExperimentallyEnabled;
@property (nonatomic) unsigned int privacyProxyServiceStatus;
@property (nonatomic) unsigned int privacyProxyUserTier;
@property (retain, nonatomic) NSArray *privacyProxyNetworkStatus;
@property (retain, nonatomic) SFPrivacyProxyTraffic *privacyProxyTraffic;
@property (retain, nonatomic) NSString *trialTreatmentId;
@property (retain, nonatomic) NSString *packetFilterState;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryReport:(char)a0;

@end
