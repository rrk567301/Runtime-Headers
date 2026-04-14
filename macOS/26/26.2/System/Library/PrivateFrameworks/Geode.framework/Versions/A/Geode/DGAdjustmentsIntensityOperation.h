@class NSNumber;

@interface DGAdjustmentsIntensityOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (id)_filter;
- (id)init;
- (void)dealloc;
- (BOOL)isPostGeometryOperation;

@end
