@class NSNumber;

@interface DGGNGContrastOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputContrast;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (id)_filter;
- (void)dealloc;

@end
