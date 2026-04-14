@interface SPAppDefaults : SPDefaults

+ (void)initialize;
+ (BOOL)isAppleInternalInstall;
+ (id)defaultList;
+ (void)resetDisabledGroups;
+ (id)disabledGroups;
+ (id)groupIdToNameDictionary;
+ (id)groupNameToGroupNumberDictionary;
+ (id)allGroupIndexSet;
+ (id)nameFromGroupId:(unsigned long long)a0;
+ (id)groupIdFromName:(id)a0;
+ (void)resetEnabledGroupIndexSet;
+ (void)resetEnabledGroupQueryFragment;
+ (id)enabledGroupIndexSet;
+ (id)enabledGroupQueryFragment;
+ (id)enabledGroupQueryString:(id)a0;
+ (id)topHitGroupPreferences;
+ (id)localizedGroupNameDictionary;
+ (id)localizedGroupName:(id)a0;
+ (id)dockApps;
+ (BOOL)localSuggestionsEnabled;
+ (BOOL)bullseyeSuggestionsEnabled;
+ (BOOL)showDebugLocalSuggestionsEnabled;
+ (BOOL)isUniversalSearchEnabled;

- (void)reloadPrefs;

@end
