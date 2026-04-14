@interface MOWebContentFilterPolicySettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) unsigned long long maximumAutoAllowCount;
@property (readonly, nonatomic) unsigned long long maximumNeverAllowCount;
@property (readonly, nonatomic) unsigned long long maximumOnlyAllowCount;

- (id)persistableValueFromValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)_combine:(id)a0 with:(id)a1;
- (id)initWithDefaultPolicy:(id)a0 maximumAutoAllowCount:(unsigned long long)a1 maximumNeverAllowCount:(unsigned long long)a2 maximumOnlyAllowCount:(unsigned long long)a3 isPublic:(BOOL)a4;

@end
