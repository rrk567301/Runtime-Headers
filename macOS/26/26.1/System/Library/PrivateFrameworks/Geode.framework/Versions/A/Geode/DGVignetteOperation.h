@class NSNumber;

@interface DGVignetteOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputType;
@property (copy, nonatomic) NSNumber *inputIntensity;
@property (copy, nonatomic) NSNumber *inputRadius;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)dealloc;
- (id)init;
- (BOOL)isPostGeometryOperation;

@end
