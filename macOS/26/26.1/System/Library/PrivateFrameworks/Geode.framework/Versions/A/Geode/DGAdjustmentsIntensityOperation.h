@class NSNumber;

@interface DGAdjustmentsIntensityOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isPostGeometryOperation;

@end
