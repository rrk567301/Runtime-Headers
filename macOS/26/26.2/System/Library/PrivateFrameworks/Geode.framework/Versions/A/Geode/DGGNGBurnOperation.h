@class NSNumber;

@interface DGGNGBurnOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputExposure;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (id)init;
- (void)dealloc;

@end
