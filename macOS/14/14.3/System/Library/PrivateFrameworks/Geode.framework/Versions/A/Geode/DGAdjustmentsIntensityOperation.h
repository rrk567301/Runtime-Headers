@class NSNumber;

@interface DGAdjustmentsIntensityOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_filter;
- (id)initWithOperation:(id)a0;
- (BOOL)isPostGeometryOperation;

@end
