@class CSSpeechManager, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerFileLogger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSSpeechManager *speechManager;
@property (nonatomic) BOOL fileLoggingEnabled;
@property (nonatomic) BOOL isExclaveHardware;

+ (void)deleteAllOnDeviceSMRAudioLogs;
+ (void)pruneOnDeviceSMRAudioLogs;

- (BOOL)_shouldSyncToCompanion;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (BOOL)_shouldLogGeckoEvent:(id)a0;
- (void)selfTriggerDetector:(id)a0 didDetectSelfTrigger:(id)a1;
- (void)_logSelfTriggerAudioWithPrefix:(id)a0 result:(id)a1;
- (void)_notifyFalseRejectFeedbackBanner:(id)a0;
- (id)_audioLogDirectory;
- (id)_timeStampString;
- (id)initWithSpeechManager:(id)a0 fileLoggingEnabled:(BOOL)a1;
- (id)_metaFilenameWithRootDir:(id)a0 prefix:(id)a1 deviceId:(id)a2;
- (BOOL)_shouldSkipLogging:(id)a0;
- (void).cxx_destruct;
- (long long)_geckoLoggingMode;
- (void)_clearOldLoggingFiles;
- (void)_writeDictionary:(id)a0 toPath:(id)a1;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (id)init;
- (void)_syncAvailableSecureCaptures;
- (void)selfTriggerDetector:(id)a0 didDetectNearMiss:(id)a1;
- (void)_logVTResult:(id)a0 metaFilePath:(id)a1 audioFilePath:(id)a2 completion:(id /* block */)a3;
- (void)_logGeckoWithFilePrefix:(id)a0 WithResult:(id)a1;
- (void)_moveSecureAudioCaptureFrom:(id)a0 withExclaveTimestamp:(id)a1;
- (BOOL)_shouldLogDeviceId:(id)a0;
- (id)_geckoLogDirectory;

@end
