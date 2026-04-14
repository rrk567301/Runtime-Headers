@class NSString;

@interface ProductionSRSensorWriterProvider : NSObject <SRSensorWriterProvider>

@property (readonly, nonatomic) BOOL isValidSRSensorWriterPresent;
@property (readonly, nonatomic) BOOL isMonitoring;
@property (readonly, nonatomic) BOOL isBundleIdentifierEligible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)provideSample:(id)a0 error:(id *)a1;
- (BOOL)provideSample:(id)a0 continuousTimestamp:(unsigned long long)a1 error:(id *)a2;
- (id)initWithSensorType:(long long)a0 bundleIdentifier:(id)a1;

@end
