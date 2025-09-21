@class NSMutableArray, NSString, AXCVoiceSelection, NSAttributedString, AVSpeechUtterance, _TtC12TextToSpeech10TaggedSSML;

@interface TTSSpeechAction : NSObject

@property (retain, nonatomic) AVSpeechUtterance *utterance;
@property (retain, nonatomic) NSString *processedString;
@property (retain, nonatomic) _TtC12TextToSpeech10TaggedSSML *taggedSSML;
@property (nonatomic) unsigned long long currentSSMLSnippetIndex;
@property (retain, nonatomic) NSMutableArray *emojiRangeReplacements;
@property (nonatomic) char shouldQueue;
@property (nonatomic) char cannotInterrupt;
@property (nonatomic) char shouldDetectLanguage;
@property (nonatomic) char shouldProcessEmoji;
@property (nonatomic) char shouldProcessEmoticons;
@property (nonatomic) char shouldPrecomposeString;
@property (nonatomic) char ignoreCustomSubstitutions;
@property (nonatomic) char synthesizeSilently;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *voiceIdentifier;
@property (retain, nonatomic) AXCVoiceSelection *voiceSelection;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ audioBufferCallback;
@property (copy, nonatomic) id /* block */ markerCallback;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSString *ssmlRepresentation;
@property (copy, nonatomic) id /* block */ completionCallback;
@property (copy, nonatomic) id /* block */ onPauseCallback;
@property (copy, nonatomic) id /* block */ onResumeCallback;
@property (copy, nonatomic) id /* block */ onWillSpeakRangeCallback;
@property (copy, nonatomic) id /* block */ onMarkerCallback;
@property (copy, nonatomic) id /* block */ onSpeechStartCallback;
@property (nonatomic) double speakingRate;
@property (nonatomic) double pitch;
@property (nonatomic) double volume;
@property (nonatomic) long long wordCallbackPostProcessedOffset;
@property (retain, nonatomic) NSString *finalSpokenString;

+ (id)actionWithAttributedString:(id)a0 shouldQueue:(char)a1;
+ (id)actionWithSSMLRepresentation:(id)a0 shouldQueue:(char)a1;
+ (id)actionWithString:(id)a0 shouldQueue:(char)a1;
+ (void)test_setUseMaxSpeechRate:(char)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_detectLanguageFromContent;
- (void)preprocessAction;

@end
