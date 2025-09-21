@class NSURL, NSMutableDictionary, _LTDSELFLoggingManager, _LTTextToSpeechCache, NSObject, _LTSpeechTranslationAssetInfo, NSLocale, _LTMultilingualSpeechRecognizer, _LTLanguageDetectionResult, NSString, _LTLocalePair, NSArray, _LTOfflineSpeechSynthesizer, EMTTranslator, NSError;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface _LTOfflineTranslationEngine : NSObject <_LTTranslationEngine> {
    _LTSpeechTranslationAssetInfo *_assetInfo;
    _LTMultilingualSpeechRecognizer *_recognizer;
    _LTOfflineSpeechSynthesizer *_synthesizer;
    NSMutableDictionary *_etiquetteSanitizers;
    EMTTranslator *_translator;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    char _isSpeechTranslationCancelled;
    char _notifyDelegateOnSuccessfullCancellation;
    NSObject<OS_dispatch_group> *_lidWaitGroup;
    NSLocale *_lidBestResult;
    _LTLanguageDetectionResult *_lidResult;
    char _didEndpointSpeech;
    NSError *_earError;
    _LTDSELFLoggingManager *_selfLoggingManager;
}

@property (retain, nonatomic) _LTLocalePair *localePair;
@property (retain, nonatomic) NSArray *asrModelURLs;
@property (retain, nonatomic) NSURL *mtModelURL;
@property (retain, nonatomic) _LTTextToSpeechCache *ttsCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_needToWaitForBothFinalTranslationResultsWithContext:(id)a0 lidResult:(id)a1;

- (void).cxx_destruct;
- (void)endpoint;
- (void)endAudio;
- (void)addSpeechAudioData:(id)a0;
- (void)speak:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)setLanguagesRecognized:(id)a0 context:(id)a1;
- (char)translatesPair:(id)a0;
- (id)_getBestRecognitionResult:(id)a0 context:(id)a1;
- (id)_handleTranslationResults:(id)a0 withContext:(id)a1 sourceString:(id)a2;
- (void)_loadEtiquetteSanitizers;
- (void)_loadRecognizersWithContext:(id)a0;
- (void)_loadTranslatorForTask:(id)a0;
- (id)_paragraphResultFromSentences:(id)a0;
- (void)_translate:(id)a0 withContext:(id)a1 isFinal:(char)a2 completion:(id /* block */)a3;
- (void)_translate:(id)a0 withContext:(id)a1 toLocale:(id)a2 paragraphResult:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_translateParagraph:(id)a0 withContext:(id)a1 toLocale:(id)a2 completion:(id /* block */)a3;
- (void)_translatePrepare:(id)a0;
- (void)_translateString:(id)a0 isFinal:(char)a1 withContext:(id)a2 toLocale:(id)a3 withSpans:(id)a4 completion:(id /* block */)a5;
- (void)_waitForLIDWithContext:(id)a0 completion:(id /* block */)a1;
- (void)cancelRecognition:(char)a0;
- (void)cancelSpeechTranslation:(char)a0;
- (id)initWithLocalePair:(id)a0 assetInfo:(id)a1 selfLoggingManager:(id)a2;
- (void)preheatAsynchronously:(char)a0 withContext:(id)a1;
- (void)startSpeechTranslationWithContext:(id)a0 delegate:(id)a1;
- (void)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1 delegate:(id)a2;
- (void)translate:(id)a0 withContext:(id)a1 paragraphResult:(id /* block */)a2 completion:(id /* block */)a3;

@end
