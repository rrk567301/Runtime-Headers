@class NSNumber;

@interface DGGNGContrastOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputContrast;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)dealloc;
- (id)init;

@end
