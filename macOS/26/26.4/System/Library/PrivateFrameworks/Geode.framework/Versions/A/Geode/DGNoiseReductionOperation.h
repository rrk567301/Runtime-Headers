@class NSNumber;

@interface DGNoiseReductionOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputRadius;
@property (copy, nonatomic) NSNumber *inputEdgeDetail;
@property int inputNoiseReductionLegacyVersion;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)isMigratable;
- (id)_filterWithScalingFactor:(double)a0 pipelineVersion:(long long)a1 legacyVersion:(int)a2;
- (void)setOperationDefaults;

@end
