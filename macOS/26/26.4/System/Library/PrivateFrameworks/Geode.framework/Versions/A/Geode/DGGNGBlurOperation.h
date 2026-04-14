@class NSNumber;

@interface DGGNGBlurOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (void)dealloc;

@end
