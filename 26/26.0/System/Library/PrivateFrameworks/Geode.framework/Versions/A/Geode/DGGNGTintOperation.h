@class NSNumber;

@interface DGGNGTintOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputAngle;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)dealloc;
- (id)init;

@end
