@class NSNumber;

@interface DGProEdgeSharpenOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputSharpness;
@property (copy, nonatomic) NSNumber *inputEdgeScale;
@property (copy, nonatomic) NSNumber *inputFalloff;
@property int inputProEdgeSharpenLegacyVersion;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (BOOL)_doNotScaleFalloff;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)isMigratable;
- (id)_filterWithScalingFactor:(double)a0 pipelineVersion:(long long)a1 legacyVersion:(int)a2;
- (void)setOperationDefaults;

@end
