@class NSNumber;

@interface DGGNGSharpenOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputSharpness;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (void)dealloc;
- (id)init;

@end
