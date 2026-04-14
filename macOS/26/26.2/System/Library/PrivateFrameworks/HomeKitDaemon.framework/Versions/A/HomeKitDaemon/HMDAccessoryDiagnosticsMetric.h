@class NSString, NSDictionary, NSDate, HMDHAPAccessory;

@interface HMDAccessoryDiagnosticsMetric : HMFObject <HMFLogging>

@property (copy, nonatomic) NSDate *metricCollectionStartTime;
@property (readonly) NSDictionary *metric;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)reset;
- (void).cxx_destruct;
- (void)submitMetric:(id)a0;
- (id)initWithAccessory:(id)a0;
- (id)collectMetric;

@end
