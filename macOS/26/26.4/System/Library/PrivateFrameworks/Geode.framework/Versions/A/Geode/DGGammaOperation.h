@class NSNumber;

@interface DGGammaOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputPower;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (id)init;
- (void)dealloc;

@end
