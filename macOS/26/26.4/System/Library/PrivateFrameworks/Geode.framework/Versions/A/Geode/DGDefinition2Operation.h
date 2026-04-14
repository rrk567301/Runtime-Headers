@class NSNumber;

@interface DGDefinition2Operation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isMigratable;

@end
