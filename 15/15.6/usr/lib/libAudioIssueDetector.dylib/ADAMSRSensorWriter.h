@interface ADAMSRSensorWriter : NSObject

@property (readonly, nonatomic) char isValidSRSensorWriterPresent;
@property (readonly, nonatomic) char isMonitoring;
@property (readonly, nonatomic) char isBundleIdentifierEligible;

- (id)initWithSensorType:(int)a0 bundleIdentifier:(id)a1;
- (char)provideSample:(id)a0 continuousTimestamp:(unsigned long long)a1 error:(id *)a2;
- (char)provideSample:(id)a0 error:(id *)a1;

@end
