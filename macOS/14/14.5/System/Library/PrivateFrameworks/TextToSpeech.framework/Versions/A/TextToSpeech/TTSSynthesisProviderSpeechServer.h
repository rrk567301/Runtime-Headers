@class NSString, NSMutableDictionary;

@interface TTSSynthesisProviderSpeechServer : NSObject <TTSSynthesisProviderAudioEngineProtocol, TTSSpeechService, TTSSpeechSynthesizerDelegate, TTSSpeechServiceUnitTesting>

@property (retain, nonatomic) NSMutableDictionary *requestMapping;
@property (retain, nonatomic) NSMutableDictionary *speechEngines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)regexRules;

- (id)init;
- (void).cxx_destruct;
- (void)initializeSpeechServerInstance:(unsigned long long)a0;
- (id)_escapeSSML:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nonSSMLSubstringRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromSSML:(id)a1;
- (id)_performEscapeOrDeEscapeFor:(id)a0 escape:(BOOL)a1;
- (void)_purgeRequest:(id)a0;
- (id)_speechEngineForSynthesizerInstance:(unsigned long long)a0;
- (id)_ttsMarkerForSSEMarker:(id)a0 forRequest:(id)a1;
- (id)_unescapeDelimeterBoundedSSMLInString:(id)a0;
- (id)audioFileSettingsForVoice:(id)a0;
- (BOOL)canInitializeSpeech:(id)a0;
- (id)combinedProsodyMarkupForVoice:(id)a0 string:(id)a1 rate:(id)a2 pitch:(id)a3 volume:(id)a4;
- (oneway void)continueSpeechRequest:(id)a0;
- (BOOL)employSpeechMarkupForType:(long long)a0 language:(id)a1;
- (id)enclosedStringWithPhonemes:(id)a0 originalString:(id)a1;
- (id)genericMarkerMarkupForVoice:(id)a0 name:(id)a1;
- (oneway void)getSpeechIsActiveForRequest:(id)a0 reply:(id /* block */)a1;
- (BOOL)isNashvilleService;
- (BOOL)isSiriService;
- (BOOL)isVoiceValid:(id)a0;
- (struct __CFArray { } *)loadedVoiceResources;
- (oneway void)pauseSpeechRequest:(id)a0 atMark:(long long)a1;
- (id)phonemesFromIPA:(id)a0 language:(id)a1;
- (void)setServiceQueue:(id)a0 forSynthesizerInstanceID:(unsigned long long)a1;
- (id)speechMarkupStringForType:(long long)a0 voice:(id)a1 string:(id)a2;
- (oneway void)startSpeechRequest:(id)a0;
- (oneway void)stopSpeechRequest:(id)a0 atMark:(long long)a1;
- (id)supportedIPAPhonemeLanguages;
- (void)synthesisProviderDidFinishSpeakingRequest:(id)a0 successfully:(BOOL)a1 withError:(id)a2;
- (void)synthesisProviderDidStartSpeakingMarker:(id)a0 forRequest:(id)a1;
- (void)synthesizerInstanceDestroyed:(unsigned long long)a0;

@end
