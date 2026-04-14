@class NSString, NSDictionary, TLAccessQueue;
@protocol NSCopying;

@interface TLToneManager : NSObject {
    TLAccessQueue *_accessQueue;
    NSDictionary *_tonesByIdentifier;
    NSDictionary *_toneIdentifiersBySyncIdentifier;
    NSDictionary *_alertTonesByIdentifier;
    NSDictionary *_toneIdentifierAliasMap;
    id<NSCopying> _contentProtectionStateObserverToken;
    BOOL _shouldUseServiceToAccessTonePreferences;
    NSDictionary *_cachedTonePreferences;
    BOOL _shouldIgnoreNextToneDidChangeNotification;
}

@property (class, readonly) TLToneManager *sharedToneManager;

@property (readonly, nonatomic) NSString *_rootDirectory;
@property (readonly, nonatomic) NSString *_deviceITunesRingtoneDirectory;
@property (readonly, nonatomic) NSString *_deviceITunesRingtoneInformationPlist;
@property (readonly, nonatomic) NSString *_iTunesRingtoneDirectory;
@property (readonly, nonatomic) NSString *_iTunesRingtoneInformationPlist;
@property (readonly, nonatomic) NSString *_systemRingtoneDirectory;

+ (id)_systemWideTonePreferenceKeyForAlertType:(long long)a0;
+ (id)_defaultToneIdentifierForAlertType:(long long)a0 topic:(id)a1;
+ (BOOL)_ensureTCCAccessPreflightAndCheckForFileExistenceAtPath:(id)a0;
+ (id)_abbreviatedDescriptionOfMediaPlaybackArchive:(id)a0;
+ (id)_abbreviatedDescriptionOfToneIdentifierWithUnderlyingMediaPlaybackArchiveForLogging:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)currentToneIdentifierForAlertType:(long long)a0;
- (BOOL)toneWithIdentifierIsValid:(id)a0;
- (id)currentToneIdentifierForAlertType:(long long)a0 topic:(id)a1;
- (id)_previewSoundForToneIdentifier:(id)a0;
- (id)_soundForToneIdentifier:(id)a0;
- (id)initWithITunesRingtonePlistAtPath:(id)a0;
- (BOOL)_loadITunesRingtoneInfoPlistAtPath:(id)a0;
- (void)_loadAlertToneInfo;
- (void)_loadToneIdentifierAliasMap;
- (void)_performBlockInAccessQueue:(id /* block */)a0;
- (void)_handleProtectionContentUnlockedEvent;
- (id)_tonesFromManifestPath:(id)a0 mediaDirectoryPath:(id)a1;
- (void)_reloadTonesAfterExternalChange;
- (id)_installedTones;
- (id)_systemEmbeddedSoundDirectory;
- (id)_baseDirectoryForAlertToneSoundFiles;
- (id)_systemSoundDirectory;
- (id)_systemNewSoundDirectory;
- (id)_systemFaceTimeSoundDirectory;
- (id)_systemEmbeddedModernSoundDirectory;
- (id)defaultRingtoneIdentifier;
- (BOOL)_toneWithIdentifierIsSystemAlertTone:(id)a0;
- (id)_aliasForToneIdentifier:(id)a0;
- (id)_underlyingPlaybackArchiveForToneIdentifier:(id)a0;
- (id)_newServiceConnection;
- (void)setCurrentToneIdentifier:(id)a0 forAlertType:(long long)a1 topic:(id)a2;
- (id)_tonePreferencesFromService;
- (id)_currentToneIdentifierForAlertType:(long long)a0 topic:(id)a1;
- (id)_defaultPreferablyNonSilentToneIdentifierForAlertType:(long long)a0 topic:(id)a1;
- (id)defaultToneIdentifierForAlertType:(long long)a0 topic:(id)a1;
- (BOOL)_setToneIdentifierUsingService:(id)a0 keyedByTopic:(id)a1 forPreferenceKey:(id)a2;
- (void)_didSetTonePreferenceSuccessfullyWithKey:(id)a0 inDomain:(id)a1 usingPreferencesOfKind:(unsigned long long)a2;
- (id)nameForToneIdentifier:(id)a0;
- (unsigned int)currentToneSoundIDForAlertType:(long long)a0 topic:(id)a1;
- (id)defaultToneIdentifierForAlertType:(long long)a0;
- (id)filePathForToneIdentifier:(id)a0;
- (BOOL)_toneWithIdentifierIsITunesRingtone:(id)a0;
- (BOOL)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)a0;
- (BOOL)_toneWithIdentifierIsDefaultRingtone:(id)a0;
- (BOOL)_toneWithIdentifierIsAlarmWakeUp:(id)a0;
- (id)_filePathForToneIdentifier:(id)a0 isValid:(BOOL *)a1;
- (id)_fileNameFromToneIdentifier:(id)a0 withPrefix:(id)a1;
- (id)_alarmWakeUpRingtoneDirectory;
- (id)_defaultRingtonePath;
- (id)_nameForToneIdentifier:(id)a0 isValid:(BOOL *)a1;
- (id)_localizedNameOfToneWithIdentifier:(id)a0;
- (id)_defaultRingtoneName;
- (BOOL)_toneWithIdentifierIsMediaPlaybackArchive:(id)a0;
- (id)_systemWatchSoundDirectory;
- (BOOL)_toneWithIdentifierIsValid:(id)a0;
- (void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(unsigned long long)a0;
- (void)_reloadTones;
- (id)_toneWithIdentifier:(id)a0;
- (unsigned long long)_installedTonesSize;
- (void)setCurrentToneIdentifier:(id)a0 forAlertType:(long long)a1;
- (id)currentToneNameForAlertType:(long long)a0;
- (unsigned int)currentToneSoundIDForAlertType:(long long)a0;
- (BOOL)hasSpecificDefaultToneIdentifierForAlertType:(long long)a0 topic:(id)a1;
- (id)subtitleForToneIdentifier:(id)a0;
- (id)_toneIdentifierForFileAtPath:(id)a0 isValid:(BOOL *)a1;
- (id)_toneIdentifierWithUnderlyingPlaybackArchive:(id)a0;
- (BOOL)_hasUnderlyingPlaybackArchiveForToneIdentifier:(id)a0;
- (BOOL)_ensureDirectoryExistsAtPath:(id)a0;

@end
