@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceProfileRetrainManager : NSObject <CSVoiceTriggerEnabledMonitorDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_migrateTDVoiceProfileCallback;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)_runRetrainerWithAssets:(id)a0 withSecureAsset:(id)a1 languageCode:(id)a2;
- (void)_speakerRecognitionModelRetrainCallback;
- (void)_speakerRecognitionCleanupDuplicatedProfilesCallback;
- (void).cxx_destruct;
- (void)CSVoiceTriggerEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)_retrainingVoiceProfile:(id)a0 voiceProfile:(id)a1 asset:(id)a2 secureAsset:(id)a3;
- (id)init;
- (void)triggerVoiceProfileRetrainingWithAsset:(id)a0 withSecureAsset:(id)a1;
- (void)CSSpeakerRecognitionAssetDownloadMonitor:(id)a0 didInstallNewAsset:(BOOL)a1 assetProviderType:(unsigned long long)a2;
- (void)_runVoiceProfileRetrainerWithAsset:(id)a0 withSecureAsset:(id)a1 withLanguageCode:(id)a2;

@end
