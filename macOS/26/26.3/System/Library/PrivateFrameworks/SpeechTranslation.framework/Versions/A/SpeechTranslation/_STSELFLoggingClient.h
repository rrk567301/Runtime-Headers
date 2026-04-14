@class NSString, NSObject, _STSELFLoggingSession;
@protocol OS_dispatch_queue;

@interface _STSELFLoggingClient : NSObject <_STSpeechTranslatorClientConforming> {
    _STSELFLoggingSession *_ongoingSession;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_endSessionWithError:(id)a0;
- (void)audioGenerationDidFinish;
- (void)clientShouldDisconnect;
- (void)didGenerateTranslatedAudio:(id)a0;
- (void)producedTranscription:(id)a0;
- (void)producedTranslation:(id)a0;
- (void)registerClientList:(id)a0 configuration:(id)a1;
- (void)translationDidPauseWithReason:(id)a0;
- (void)translationDidResume;
- (void)translationDidStart;
- (void)translationDidStopWithError:(id)a0;
- (void)willStartTranslatedAudioWithMetadata:(id)a0;

@end
