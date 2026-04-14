@interface SPAppDefaults : SPDefaults

+ (void)initialize;
+ (BOOL)isAppleInternalInstall;
+ (id)allGroupIndexSet;
+ (BOOL)bullseyeSuggestionsEnabled;
+ (id)defaultList;
+ (id)disabledGroups;
+ (id)dockApps;
+ (id)enabledGroupIndexSet;
+ (id)enabledGroupQueryFragment;
+ (id)enabledGroupQueryString:(id)a0;
+ (id)groupIdFromName:(id)a0;
+ (id)groupIdToNameDictionary;
+ (id)groupNameToGroupNumberDictionary;
+ (BOOL)isUniversalSearchEnabled;
+ (BOOL)localSuggestionsEnabled;
+ (id)localizedGroupName:(id)a0;
+ (id)localizedGroupNameDictionary;
+ (id)nameFromGroupId:(unsigned long long)a0;
+ (void)resetDisabledGroups;
+ (void)resetEnabledGroupIndexSet;
+ (void)resetEnabledGroupQueryFragment;
+ (BOOL)showDebugLocalSuggestionsEnabled;
+ (id)topHitGroupPreferences;

- (void)reloadPrefs;

@end
