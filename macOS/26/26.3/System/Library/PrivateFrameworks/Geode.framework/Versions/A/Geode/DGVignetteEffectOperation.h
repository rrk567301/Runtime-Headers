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
- (id)init;
- (id)_filter;
- (void).cxx_destruct;
- (void)dealloc;
- (id)commandIdentifier;
- (BOOL)isMigratable;
- (BOOL)isPostGeometryOperation;

@end
