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
- (void)processBargeInVoiceTriggerWithResult:(id /* block */)a0;
- (void)processSecondPassVoiceTriggerWithShouldFlushAudio:(BOOL)a0 result:(id /* block */)a1;
- (void)resetFirstPassVoiceTrigger;
- (BOOL)setSiriLocale:(id)a0;
- (BOOL)setSpeakerProfile:(id)a0 numEmbeddings:(unsigned long long)a1 dimension:(unsigned long long)a2 speakerRecognizerType:(unsigned long long)a3;
- (void)startBargeInVoiceTrigger;
- (void)startSecondPassVoiceTriggerWithFirstPassSource:(unsigned long long)a0 phsEnabled:(BOOL)a1 supportMultiPhrase:(BOOL)a2;
- (void)stopBargeInVoiceTrigger;
- (void)stopSecondPassVoiceTrigger;
- (BOOL)fetchAndStoreAudioBuffer;
- (int)processBargeInVoiceTrigger;
- (void)requestHistoricalAudioBufferFor:(unsigned long long)a0 startSample:(unsigned long long)a1 numSamples:(unsigned long long)a2 hostTime:(unsigned long long)a3;
- (BOOL)startAudioStream;

@end
