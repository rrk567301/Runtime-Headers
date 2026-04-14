@class NSNumber;

@interface DGGNGSaturationOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputSaturation;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (id)init;
- (void)dealloc;

@end
