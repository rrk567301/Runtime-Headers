@class NSNumber;

@interface DGAdjustmentsIntensityOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isPostGeometryOperation;

@end
