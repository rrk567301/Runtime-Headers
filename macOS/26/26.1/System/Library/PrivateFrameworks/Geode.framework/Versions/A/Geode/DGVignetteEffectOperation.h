@class NSNumber;

@interface DGVignetteEffectOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;
@property (copy, nonatomic) NSNumber *inputFalloff;
@property (copy, nonatomic) NSNumber *inputRadius;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)commandIdentifier;
- (BOOL)isMigratable;
- (BOOL)isPostGeometryOperation;

@end
