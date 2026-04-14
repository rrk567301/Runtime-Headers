@class NSNumber;

@interface DGGNGVibrancyOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputAmount;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (id)_filter;
- (id)initWithOperation:(id)a0;

@end
