@class NSArray, SiriTTSDaemonSession;

@interface _LTDTTSAssetService : NSObject <_LTDAssetServiceProtocol>

@property (class, retain) SiriTTSDaemonSession *siriTTSSession;
@property (class, copy, nonatomic) NSArray *subscribedVoices;

+ (id)_queue;
+ (id)_allTTSAssets;
+ (long long)_genderForLocaleIdentifier:(id)a0;
+ (id)_mapIdentifierForSiriTTS:(id)a0;
+ (long long)_preferredGender;
+ (id)_preferredNameForLanguage:(id)a0;
+ (id)_siriVoiceForTTSAsset:(id)a0;
+ (void)_subscribeToVoice:(id)a0;
+ (void)downloadAsset:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)downloadVoiceAssetsForLanguagePair:(id)a0;
+ (long long)preferredVoiceType;
+ (void)purgeAsset:(id)a0 completion:(id /* block */)a1;
+ (id)ttsAssetForLocaleIdentifier:(id)a0 onDeviceOnly:(BOOL)a1;
+ (id)voiceForLocaleIdentifier:(id)a0;

@end
