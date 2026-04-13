@interface SPAppDefaults : SPDefaults

+ (void)initialize;
+ (BOOL)isAppleInternalInstall;
+ (id)disabledGroups;
+ (id)groupIdToNameDictionary;
+ (id)groupNameToGroupNumberDictionary;
+ (id)allGroupIndexSet;
+ (id)nameFromGroupId:(unsigned long long)a0;
+ (id)enabledGroupIndexSet;
+ (id)enabledGroupQueryFragment;
+ (void)resetDisabledGroups;
+ (void)resetEnabledGroupIndexSet;
+ (void)resetEnabledGroupQueryFragment;
+ (id)localizedGroupNameDictionary;
+ (id)defaultList;
+ (id)groupIdFromName:(id)a0;
+ (id)enabledGroupQueryString:(id)a0;
+ (id)topHitGroupPreferences;
+ (id)localizedGroupName:(id)a0;
+ (id)dockApps;
+ (BOOL)localSuggestionsEnabled;
+ (BOOL)bullseyeSuggestionsEnabled;
+ (BOOL)showDebugLocalSuggestionsEnabled;

- (void)reloadPrefs;

@end
