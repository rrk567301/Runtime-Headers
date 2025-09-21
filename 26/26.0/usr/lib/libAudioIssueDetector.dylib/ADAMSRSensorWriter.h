@interface ADAMSRSensorWriter : NSObject

@property (readonly, nonatomic) BOOL isValidSRSensorWriterPresent;
@property (readonly, nonatomic) BOOL isMonitoring;
@property (readonly, nonatomic) BOOL isBundleIdentifierEligible;

- (BOOL)provideSample:(id)a0 error:(id *)a1;
- (BOOL)provideSample:(id)a0 continuousTimestamp:(unsigned long long)a1 error:(id *)a2;
- (id)initWithSensorType:(int)a0 bundleIdentifier:(id)a1;

@end
