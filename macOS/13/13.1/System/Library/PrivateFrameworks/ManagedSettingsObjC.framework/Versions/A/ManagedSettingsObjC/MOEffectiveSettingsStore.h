@interface MOEffectiveSettingsStore : MOSettingsStore <MOSettingsReader>

+ (id)new;

- (id)init;
- (id)reader;
- (id)valueForSetting:(id)a0 inGroup:(id)a1;

@end
