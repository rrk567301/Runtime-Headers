@class NSNumber;

@interface DGGNGDefinitionOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputRadius;
@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (void)dealloc;
- (id)init;
- (id)_filterWithScalingFactor:(double)a0;

@end
