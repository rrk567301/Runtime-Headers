@interface MOEffectiveSettingsStore : MOSettingsStore <MOSettingsReader>

+ (id)new;
+ (id)setOfActiveRestrictionUUIDs;
+ (id)publisherForGroups:(id)a0;

- (id)init;
- (id)reader;
- (id)valueForSetting:(id)a0 inGroup:(id)a1;

@end
