@class NSNumber;

@interface DGGNGDodgeOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputExposure;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (id)init;
- (void)dealloc;

@end
