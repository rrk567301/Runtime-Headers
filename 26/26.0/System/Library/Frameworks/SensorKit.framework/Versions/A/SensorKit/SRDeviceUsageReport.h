@class NSString, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface SRDeviceUsageReport : NSObject <SRSampleExporting, NSSecureCoding, SRSampling, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableDictionary *mutableApplicationUsageByCategory;
@property (retain) NSMutableDictionary *mutableNotificationUsageByCategory;
@property (retain) NSMutableDictionary *mutableWebUsageByCategory;
@property (retain) NSMutableArray *_mutableMotionActivities;
@property (retain) NSMutableArray *_mutableActivityLevels;
@property (retain) NSMutableDictionary *_reportApplicationIdentifierByBundleIdentifier;
@property double startTime;
@property double duration;
@property long long totalScreenWakes;
@property double totalScreenWakeDuration;
@property long long totalUnlocks;
@property double totalUnlockDuration;
@property double _totalChargingDuration;
@property (copy, nonatomic) NSString *version;
@property double _firstAppLaunchTimeRelativeToInterval;
@property (readonly, copy) NSDictionary *applicationUsageByCategory;
@property (readonly, copy) NSDictionary *notificationUsageByCategory;
@property (readonly, copy) NSDictionary *webUsageByCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)deviceUsageReportWithInterval:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)sr_dictionaryRepresentation;
- (id)_activityLevels;
- (id)_motionActivities;

@end
