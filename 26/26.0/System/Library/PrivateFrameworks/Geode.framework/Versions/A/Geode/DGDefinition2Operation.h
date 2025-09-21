@class NSNumber;

@interface DGDefinition2Operation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isMigratable;

@end
