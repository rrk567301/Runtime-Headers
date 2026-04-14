@class CSExclaveIndicatorController, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, CSExclaveRecordClientDelegate;

@interface CSExclaveRecordClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isRecording;
@property (retain, nonatomic) CSExclaveIndicatorController *exclaveIndicatorController;
@property (weak, nonatomic) id<CSExclaveRecordClientDelegate> delegate;

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (BOOL)stopAudioStream;
- (void)configAOPVoiceTrigger;
- (void)fetchAOPVoiceTriggerResult:(id /* block */)a0;
- (BOOL)initializeSecondPass;
- (void)processBargeInVoiceTriggerWithResult:(id /* block */)a0;
- (void)processSecondPassVoiceTriggerWithShouldFlushAudio:(BOOL)a0 result:(id /* block */)a1;
- (void)resetFirstPassVoiceTrigger;
- (void)setAssetForLocale:(id)a0 isOTA:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)setSpeakerProfile:(id)a0 numEmbeddings:(unsigned long long)a1 dimension:(unsigned long long)a2 speakerRecognizerType:(unsigned long long)a3;
- (void)startBargeInVoiceTrigger;
- (void)startSecondPassVoiceTriggerWithFirstPassSource:(unsigned long long)a0 enablePHS:(BOOL)a1 supportMultiPhrase:(BOOL)a2;
- (void)stopBargeInVoiceTrigger;
- (void)stopSecondPassVoiceTrigger;
- (BOOL)fetchAndStoreAudioBuffer;
- (int)processBargeInVoiceTrigger;
- (void)requestHistoricalAudioBufferFor:(unsigned long long)a0 startSample:(unsigned long long)a1 numSamples:(unsigned long long)a2 hostTime:(unsigned long long)a3;
- (BOOL)startAudioStream;
- (void)startSecureMobileAssetLoaderService:(BOOL)a0 completion:(id /* block */)a1;
- (void)stopSecureMobileAssetLoaderService:(id /* block */)a0;

@end
