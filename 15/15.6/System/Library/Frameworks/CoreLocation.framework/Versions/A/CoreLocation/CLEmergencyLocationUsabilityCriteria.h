@interface CLEmergencyLocationUsabilityCriteria : NSObject

@property (nonatomic) char vuncCheckRequiredForUsability;
@property (nonatomic) char altitudeStitchingEnabled;
@property (nonatomic) double maxUsableAge;
@property (nonatomic) double maxUsableHunc;
@property (nonatomic) double maxUsableVunc;
@property (nonatomic) unsigned int minUsableIntegrity;

- (id)init;
- (void)printUsabilityCriteria:(id)a0;

@end
