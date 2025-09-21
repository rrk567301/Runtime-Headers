@class NSNumber;

@interface SASettingBooleanEntity : SASettingEntity

@property (copy, nonatomic) NSNumber *previousValue;
@property (nonatomic) char value;

+ (id)booleanEntity;
+ (id)booleanEntityWithDictionary:(id)a0 context:(id)a1;
+ (id)booleanEntityWithValue:(char)a0;

- (id)groupIdentifier;
- (id)initWithValue:(char)a0;
- (id)encodedClassName;

@end
