@class NSDictionary, AXAssetsService;

@interface TTSAXResourceMigrationUtilities : NSObject

@property (retain, nonatomic) AXAssetsService *assetsService;
@property (nonatomic) BOOL isMigrationComplete;
@property (retain, nonatomic) NSDictionary *siriLegacyToTTSMappings;
@property (retain, nonatomic) NSDictionary *obsoleteVoicesWithReplacements;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)getIdentifierForLegacyVoiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; })a0;
- (id)attributesForLegacyVoiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; })a0;
- (void)restartMigrationIfNeeded;
- (id)updatedIdentifierForLegacyIdentifier:(id)a0 withLanguageCode:(id)a1;
- (id)legacyIdentifierForUpdatedIdentifierDuringMigration:(id)a0;
- (id)_remapGenderedSiriVoiceIdentifiers:(id)a0;
- (id)convertIdentifierIfNeeded:(id)a0;
- (void)downloadCompactResourceIfNeededForIdentifier:(id)a0;
- (void)deleteCompactResourceIfNeededForIdentifier:(id)a0;
- (BOOL)resourceNeedsMigration:(id)a0;
- (void)resourceCompletedMigration:(id)a0;
- (void)writeIsMigrationCompleteToPreferences:(id)a0;
- (id)_readIsMigrationCompleteFromPreferences;
- (void)writeVoiceIdentifiersToMigrateToPreferences:(id)a0;
- (id)_readVoiceIdentifiersToMigrateFromPreferences;
- (id)_ttsAssetForSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; })a0;
- (id)ttsIdentifierForLegacyMacIdentifier:(id)a0;
- (BOOL)_processIsSiri;

@end
