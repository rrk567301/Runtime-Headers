@class NSURL, NSDictionary, NSNumber;

@interface UABaseSystem : NSObject

@property (copy, nonatomic) NSURL *testingPrebootURL;
@property (copy, nonatomic, setter=_setPrebootPreferences:) NSDictionary *_prebootPreferences;
@property (readonly, nonatomic) NSNumber *_overriddenAccessibilityType;
@property (readonly, nonatomic, getter=isActive) char active;
@property (readonly, nonatomic) unsigned long long accessibilityType;
@property (readonly, nonatomic) char hasPairedSystemPartition;
@property (readonly, nonatomic) char hasPreboot;
@property (copy, nonatomic) NSDictionary *featurePreferences;

+ (id)shared;
+ (id)_voiceIdInDict:(id)a0;
+ (id)_generalLangForLang:(id)a0;
+ (id)_prebootUUID;
+ (id)_standardizeLangForLang:(id)a0;
+ (id)_voiceIdInFolder:(id)a0;

- (void).cxx_destruct;
- (id)pathToVoiceData;
- (id)_bestSynthForPreferredLanguages:(id)a0;
- (char)_canWriteToPrebootDirectly;
- (char)_copyPath:(id)a0 toPath:(id)a1;
- (void)_createDirectoryAtPath:(id)a0 attributes:(id)a1 error:(id *)a2;
- (void)_createFileWithContents:(id)a0 path:(id)a1 attributes:(id)a2 error:(id *)a3;
- (id)_errorLog;
- (id)_expectedOSInstallSpecificPrebootURL;
- (id)_mountedOSInstallSpecificPrebootURL;
- (id)_mountedPrebootPreferencesURL;
- (id)_mountedPrebootURLWithPatchComponent:(id)a0;
- (id)_mountedPrebootVoicePrefURL;
- (id)_mountedPrebootVoiceURL;
- (id)_possiblePrebootVoiceLanguages;
- (char)_removePrebootDataAtURL:(id)a0 error:(id *)a1;
- (void)_saveSynthToPrebootPreferredLanguages:(id)a0;
- (id)_voiceData;
- (char)_writePrebootData:(id)a0 toURL:(id)a1 error:(id *)a2;
- (void)_writeVoiceIDToPrebootPrefs:(id)a0;
- (char)isRunningInFVUnlock;
- (id)prebootPath;
- (id)preferredVoice;
- (void)saveSynthToPreboot;

@end
