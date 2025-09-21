@class NSNumber;

@interface DGGNGVibrancyOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputAmount;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)dealloc;
- (id)init;

@end
