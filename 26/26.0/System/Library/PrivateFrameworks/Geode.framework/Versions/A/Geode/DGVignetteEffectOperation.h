@class NSNumber;

@interface DGVignetteEffectOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;
@property (copy, nonatomic) NSNumber *inputFalloff;
@property (copy, nonatomic) NSNumber *inputRadius;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)commandIdentifier;
- (BOOL)isMigratable;
- (BOOL)isPostGeometryOperation;

@end
