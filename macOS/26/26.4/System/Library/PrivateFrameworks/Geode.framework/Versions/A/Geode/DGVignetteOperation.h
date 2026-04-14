@class NSNumber;

@interface DGVignetteOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputType;
@property (copy, nonatomic) NSNumber *inputIntensity;
@property (copy, nonatomic) NSNumber *inputRadius;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (id)init;
- (void)dealloc;
- (BOOL)isPostGeometryOperation;

@end
