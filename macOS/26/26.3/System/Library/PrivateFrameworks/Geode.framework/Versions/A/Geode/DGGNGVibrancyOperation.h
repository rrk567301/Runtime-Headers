@class NSNumber;

@interface DGGNGVibrancyOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputAmount;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (id)_filter;
- (void)dealloc;

@end
