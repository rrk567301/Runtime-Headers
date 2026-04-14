@class NSNumber;

@interface DGGNGBurnOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputExposure;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (id)_filter;
- (void)dealloc;

@end
