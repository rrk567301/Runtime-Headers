@class NSNumber;

@interface DGGNGBlurOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (void)dealloc;
- (id)init;

@end
