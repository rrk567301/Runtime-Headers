@class NSNumber;

@interface DGGNGSharpenOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputSharpness;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (void)dealloc;

@end
