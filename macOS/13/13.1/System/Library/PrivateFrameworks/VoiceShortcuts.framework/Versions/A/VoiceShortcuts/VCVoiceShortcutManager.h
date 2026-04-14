@class NSString, HMHomeManager, WFDatabase;
@protocol WFDatabaseProvider;

@interface VCVoiceShortcutManager : NSObject <HMHomeManagerDelegate>

@property (readonly, nonatomic) HMHomeManager *homeManager;
@property (nonatomic) BOOL addingDefaultShortcuts;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)createSleepWorkflow:(id)a0 completion:(id /* block */)a1;
- (void)deleteSleepWorkflowWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getSiriAutoShortcutsEnablementForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setSiriAutoShortcutsEnablement:(BOOL)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)getSpotlightAutoShortcutsEnablementForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setSpotlightAutoShortcutsEnablement:(BOOL)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)archiveAction:(id)a0 withActionMetadata:(id)a1 completion:(id /* block */)a2;
- (void)unarchiveActionFromData:(id)a0 withActionMetadata:(id)a1 completion:(id /* block */)a2;
- (void)getResultsForQuery:(id)a0 resultClass:(Class)a1 completion:(id /* block */)a2;
- (void)getValueForDescriptor:(id)a0 resultClass:(Class)a1 completion:(id /* block */)a2;
- (id)initWithDatabaseProvider:(id)a0 eventHandler:(id)a1;
- (void)deleteStaleSuggestions;
- (void)applicationWasUnregistered:(id)a0;
- (void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)a0 completion:(id /* block */)a1;
- (void)getVoiceShortcutWithIdentifier:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getVoiceShortcutWithPhrase:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getVoiceShortcutsWithAccessSpecifier:(id)a0 completion:(id /* block */)a1;
- (void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getInactiveAppsWithAccessSpecifier:(id)a0 completion:(id /* block */)a1;
- (void)addVoiceShortcut:(id)a0 phrase:(id)a1 accessSpecifier:(id)a2 completion:(id /* block */)a3;
- (void)updateVoiceShortcutWithIdentifier:(id)a0 phrase:(id)a1 shortcut:(id)a2 accessSpecifier:(id)a3 completion:(id /* block */)a4;
- (void)deleteVoiceShortcutWithIdentifier:(id)a0 name:(id)a1 accessSpecifier:(id)a2 completion:(id /* block */)a3;
- (BOOL)phraseHasHomeKitConflict:(id)a0;
- (BOOL)isPhraseUsable:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (void)drawGlyphs:(id)a0 withBackgroundColorValues:(id)a1 padding:(double)a2 rounded:(BOOL)a3 intoContext:(id)a4;
- (void)setShortcutSuggestions:(id)a0 forAppWithBundleIdentifier:(id)a1 accessSpecifier:(id)a2;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)deleteSuggestionsFromApps:(id)a0;
- (BOOL)lsDatabaseChangedSinceLastCheck;
- (void)updateLSDatabaseAnchors;
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)a0 shouldFilterBySleep:(BOOL)a1 accessSpecifier:(id)a2 completion:(id /* block */)a3;
- (void)getSleepActionSuggestionsForAllAppsFilteringBySleep:(BOOL)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)a0 accessSpecifier:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)getSleepActionSuggestionsForAllAppsWithOptions:(unsigned long long)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)requestShortcutsSpotlightFullReindex;
- (void)requestDataMigrationWithCompletion:(id /* block */)a0;
- (void)createShortcutWithRecordData:(id)a0 name:(id)a1 shortcutSource:(id)a2 accessSpecifier:(id)a3 completion:(id /* block */)a4;
- (void)logHomescreenFastPathRunEventForShortcutWithWebClip:(id)a0;
- (void)setPerWorkflowStateData:(id)a0 forSmartPromptWithActionUUID:(id)a1 reference:(id)a2;
- (void)isAutoShortcutDisabledForBundleIdentifier:(id)a0 autoShortcutIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)setAutoShortcutDisabledForBundleIdentifier:(id)a0 autoShortcutDisabled:(BOOL)a1 autoShortcutIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)actionWithSerializedParameters:(id)a0 actionMetadata:(id)a1;

@end
