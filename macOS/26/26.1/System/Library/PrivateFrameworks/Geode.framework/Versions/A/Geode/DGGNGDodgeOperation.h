@class NSNumber;

@interface DGGNGDodgeOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputExposure;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)dealloc;
- (id)init;

@end
