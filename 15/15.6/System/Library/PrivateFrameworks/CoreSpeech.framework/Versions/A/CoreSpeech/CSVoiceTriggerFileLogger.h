@class CSSpeechManager, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerFileLogger : NSObject <CSVoiceTriggerDelegate, CSSelfTriggerDetectorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSSpeechManager *speechManager;
@property (nonatomic) char fileLoggingEnabled;
@property (nonatomic) char geckoLoggingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_audioLogDirectory;
- (void)_clearOldGeckoLoggingFiles;
- (void)_clearOldLoggingFiles;
- (id)_geckoLogDirectory;
- (void)_logGeckoWithFilePrefix:(id)a0 WithResult:(id)a1;
- (void)_logSelfTriggerAudioWithPrefix:(id)a0 result:(id)a1;
- (void)_logVTResult:(id)a0 metaFilePath:(id)a1 audioFilePath:(id)a2 completion:(id /* block */)a3;
- (id)_metaFilenameWithRootDir:(id)a0 prefix:(id)a1 deviceId:(id)a2;
- (void)_notifyFalseRejectFeedbackBanner:(id)a0;
- (char)_shouldLogDeviceId:(id)a0;
- (char)_shouldSkipLogging:(id)a0;
- (id)_timeStampString;
- (void)_writeDictionary:(id)a0 toPath:(id)a1;
- (id)initWithSpeechManager:(id)a0 fileLoggingEnabled:(char)a1 geckoLoggingEnabled:(char)a2;
- (void)selfTriggerDetector:(id)a0 didDetectNearMiss:(id)a1;
- (void)selfTriggerDetector:(id)a0 didDetectSelfTrigger:(id)a1;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;

@end
