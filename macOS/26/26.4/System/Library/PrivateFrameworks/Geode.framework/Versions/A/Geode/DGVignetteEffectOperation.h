@class NSNumber;

@interface DGVignetteEffectOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;
@property (copy, nonatomic) NSNumber *inputFalloff;
@property (copy, nonatomic) NSNumber *inputRadius;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (id)_filter;
- (id)init;
- (void)dealloc;
- (id)commandIdentifier;
- (BOOL)isMigratable;
- (BOOL)isPostGeometryOperation;

@end
