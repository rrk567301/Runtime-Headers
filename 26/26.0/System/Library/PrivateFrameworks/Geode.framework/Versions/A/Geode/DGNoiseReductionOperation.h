@class NSNumber;

@interface DGNoiseReductionOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputRadius;
@property (copy, nonatomic) NSNumber *inputEdgeDetail;
@property int inputNoiseReductionLegacyVersion;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (void)dealloc;
- (id)init;
- (BOOL)isMigratable;
- (id)_filterWithScalingFactor:(double)a0 pipelineVersion:(long long)a1 legacyVersion:(int)a2;
- (void)setOperationDefaults;

@end
