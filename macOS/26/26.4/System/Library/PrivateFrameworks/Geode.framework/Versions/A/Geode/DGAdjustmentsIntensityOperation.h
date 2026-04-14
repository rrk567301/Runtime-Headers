@class NSNumber;

@interface DGAdjustmentsIntensityOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (id)_filter;
- (id)init;
- (void)dealloc;
- (BOOL)isPostGeometryOperation;

@end
