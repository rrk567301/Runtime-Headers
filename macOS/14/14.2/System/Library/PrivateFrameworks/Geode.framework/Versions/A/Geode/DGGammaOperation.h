@class NSNumber;

@interface DGGammaOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputPower;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (id)_filter;
- (id)initWithOperation:(id)a0;

@end
