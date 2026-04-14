@class NSNumber;

@interface DGVignetteOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputType;
@property (copy, nonatomic) NSNumber *inputIntensity;
@property (copy, nonatomic) NSNumber *inputRadius;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (id)_filter;
- (id)initWithOperation:(id)a0;
- (BOOL)isPostGeometryOperation;

@end
