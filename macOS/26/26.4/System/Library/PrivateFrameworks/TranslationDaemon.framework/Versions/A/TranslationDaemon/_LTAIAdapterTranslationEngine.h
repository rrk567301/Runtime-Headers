@class NSString, _LTDSELFLoggingManager, _LTLocalePair, NSObject;
@protocol _LTAIInferenceTranslating, OS_dispatch_queue;

@interface _LTAIAdapterTranslationEngine : NSObject <_LTTranslationEngine> {
    _LTDSELFLoggingManager *_selfLoggingManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) id<_LTAIInferenceTranslating> translator;
@property (readonly, nonatomic) long long taskHint;
@property (readonly, nonatomic) long long processIdentifier;
@property (readonly, copy, nonatomic) _LTLocalePair *localePair;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startSpeechTranslationWithContext:(id)a0 delegate:(id)a1;
- (void)speak:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)addSpeechAudioData:(id)a0;
- (void)endAudio;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)endpoint;
- (BOOL)translatesPair:(id)a0;
- (void)_translateString:(id)a0 withContext:(id)a1 spans:(id)a2 completion:(id /* block */)a3;
- (void)cancelSpeechTranslation:(BOOL)a0;
- (id)initWithLocalePair:(id)a0 taskHint:(long long)a1 selfLoggingManager:(id)a2 processIdentifier:(long long)a3;
- (id)initWithLocalePair:(id)a0 taskHint:(long long)a1 selfLoggingManager:(id)a2 processIdentifier:(long long)a3 translator:(id)a4;
- (void)preheatAsynchronously:(BOOL)a0 withContext:(id)a1;
- (void)setLocalePair:(id)a0 error:(id *)a1;
- (BOOL)supportsLocalePair:(id)a0;
- (void)translate:(id)a0 withContext:(id)a1 paragraphResult:(id /* block */)a2 completion:(id /* block */)a3;
- (void)translateStreamingInput:(id)a0 context:(id)a1 stabilizer:(id)a2 completion:(id /* block */)a3;

@end
