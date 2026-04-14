@class NSNumber;

@interface DGGNGSaturationOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputSaturation;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (id)_filter;
- (void)dealloc;

@end
