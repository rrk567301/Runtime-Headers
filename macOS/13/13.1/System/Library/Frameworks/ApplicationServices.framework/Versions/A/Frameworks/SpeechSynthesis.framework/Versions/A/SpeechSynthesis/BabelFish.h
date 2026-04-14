@class NSMutableDictionary, NSDictionary, NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BabelFish : NSObject <TTSAXResourceManagerObserver>

@property (retain, nonatomic) NSMutableDictionary *speechChannelMap;
@property (retain, nonatomic) NSDictionary *siriLegacyToTTSMappings;
@property (retain, nonatomic) NSMutableDictionary *languageToCharacterRangesCache;
@property (retain, nonatomic) NSArray *cachedVoices;
@property (retain, nonatomic) NSDictionary *voicesBySpec;
@property (retain, nonatomic) NSMutableDictionary *localeNameCache;
@property (retain, nonatomic) NSDictionary *disambiguationMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *voiceAccessQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (struct VoiceSpec { unsigned int x0; unsigned int x1; })specForTTSVoice:(id)a0;
+ (id)stringKeyForVoiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; })a0;
+ (id)axSettings;
+ (id)axLanguageManager;
+ (id)localeUtilities;
+ (id)resourceManager;
+ (id)migrationUtils;

- (id)init;
- (void).cxx_destruct;
- (void)resourceCacheDidReceiveUpdate;
- (void)devicesChanged;
- (void)_monitorAudioDevices;
- (id)characterRangesForVoice:(id)a0;
- (id)_characterRangesForLocaleCode:(id)a0;
- (id)exemplarCharacterRangesForLocaleString:(id)a0;
- (BOOL)speechBusy;
- (id)newChannel:(struct VoiceSpec { unsigned int x0; unsigned int x1; } *)a0;
- (short)killChannel:(long long)a0;
- (id)getChannel:(long long)a0;
- (short)performForChannel:(long long)a0 block:(id /* block */)a1;
- (id)voiceForIdentifier:(id)a0;
- (id)_voiceForIdentifier:(id)a0;
- (id)voiceForSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; })a0;
- (struct SpeechChannelRecord { long long x0[1]; } *)nextChannelIdentifier;
- (void)_ensureCachedVoicesLoaded;
- (id)allVoices;
- (id)_disambiguationKeyForVoice:(id)a0;
- (id)_disambiguationMatrixForVoices:(id)a0;
- (id)nameForVoice:(id)a0;
- (id)nameForLocale:(id)a0;
- (id)voiceForLocale:(id)a0;
- (id)voiceForLocale:(id)a0 allowedIdentifiers:(id)a1;
- (BOOL)_voiceInAllowList:(id)a0 allowList:(id)a1;
- (BOOL)hasSiriEntitlement;

@end
