@class NSData, NSString, NSArray, AFPowerContextPolicy, NSURL, NSUUID, NSDictionary, CLLocation, AFASRSharedUserInfo;

@interface CESRSpeechParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *dictationUIInteractionIdentifier;
@property (readonly, copy, nonatomic) NSString *task;
@property (readonly, copy, nonatomic) NSArray *loggingContext;
@property (readonly, copy, nonatomic) NSString *applicationName;
@property (readonly, copy, nonatomic) NSData *profile;
@property (readonly, copy, nonatomic) NSDictionary *overrides;
@property (readonly, copy, nonatomic) NSURL *modelOverrideURL;
@property (readonly, copy, nonatomic) NSURL *originalAudioFileURL;
@property (readonly, copy, nonatomic) NSString *codec;
@property (readonly, nonatomic) char narrowband;
@property (readonly, nonatomic) char detectUtterances;
@property (readonly, nonatomic) char censorSpeech;
@property (readonly, nonatomic) char farField;
@property (readonly, nonatomic) char secureOfflineOnly;
@property (readonly, nonatomic) char shouldStoreAudioOnDevice;
@property (readonly, nonatomic) char continuousListening;
@property (readonly, nonatomic) char shouldHandleCapitalization;
@property (readonly, nonatomic) char isSpeechAPIRequest;
@property (readonly, nonatomic) double maximumRecognitionDuration;
@property (readonly, nonatomic) double endpointStart;
@property (readonly, copy, nonatomic) NSString *inputOrigin;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, copy, nonatomic) NSArray *jitGrammar;
@property (readonly, nonatomic) char deliverEagerPackage;
@property (readonly, nonatomic) char disableDeliveringAsrFeatures;
@property (readonly, nonatomic) char enableEmojiRecognition;
@property (readonly, nonatomic) char enableAutoPunctuation;
@property (readonly, nonatomic) char enableVoiceCommands;
@property (readonly, copy, nonatomic) NSArray *sharedUserInfos;
@property (readonly, copy, nonatomic) NSString *prefixText;
@property (readonly, copy, nonatomic) NSString *postfixText;
@property (readonly, copy, nonatomic) NSString *selectedText;
@property (readonly, copy, nonatomic) AFPowerContextPolicy *powerContext;
@property (readonly, nonatomic) double recognitionStart;
@property (readonly, nonatomic) char shouldGenerateVoiceCommandCandidates;
@property (readonly, copy, nonatomic) NSUUID *asrId;
@property (readonly, copy, nonatomic) AFASRSharedUserInfo *activeUserInfo;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(char)a11 detectUtterances:(char)a12 censorSpeech:(char)a13 farField:(char)a14 secureOfflineOnly:(char)a15 shouldStoreAudioOnDevice:(char)a16 continuousListening:(char)a17 shouldHandleCapitalization:(char)a18 isSpeechAPIRequest:(char)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(char)a25 disableDeliveringAsrFeatures:(char)a26 enableEmojiRecognition:(char)a27 enableAutoPunctuation:(char)a28 enableVoiceCommands:(char)a29;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(char)a11 detectUtterances:(char)a12 censorSpeech:(char)a13 farField:(char)a14 secureOfflineOnly:(char)a15 shouldStoreAudioOnDevice:(char)a16 continuousListening:(char)a17 shouldHandleCapitalization:(char)a18 isSpeechAPIRequest:(char)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(char)a25 disableDeliveringAsrFeatures:(char)a26 enableEmojiRecognition:(char)a27 enableAutoPunctuation:(char)a28 enableVoiceCommands:(char)a29 sharedUserInfos:(id)a30 prefixText:(id)a31 postfixText:(id)a32 selectedText:(id)a33 powerContext:(id)a34;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(char)a11 detectUtterances:(char)a12 censorSpeech:(char)a13 farField:(char)a14 secureOfflineOnly:(char)a15 shouldStoreAudioOnDevice:(char)a16 continuousListening:(char)a17 shouldHandleCapitalization:(char)a18 isSpeechAPIRequest:(char)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(char)a25 disableDeliveringAsrFeatures:(char)a26 enableEmojiRecognition:(char)a27 enableAutoPunctuation:(char)a28 enableVoiceCommands:(char)a29 sharedUserInfos:(id)a30 prefixText:(id)a31 postfixText:(id)a32 selectedText:(id)a33 powerContext:(id)a34 recognitionStart:(double)a35;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(char)a11 detectUtterances:(char)a12 censorSpeech:(char)a13 farField:(char)a14 secureOfflineOnly:(char)a15 shouldStoreAudioOnDevice:(char)a16 continuousListening:(char)a17 shouldHandleCapitalization:(char)a18 isSpeechAPIRequest:(char)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(char)a25 disableDeliveringAsrFeatures:(char)a26 enableEmojiRecognition:(char)a27 enableAutoPunctuation:(char)a28 enableVoiceCommands:(char)a29 sharedUserInfos:(id)a30 prefixText:(id)a31 postfixText:(id)a32 selectedText:(id)a33 powerContext:(id)a34 recognitionStart:(double)a35 shouldGenerateVoiceCommandCandidates:(char)a36;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(char)a11 detectUtterances:(char)a12 censorSpeech:(char)a13 farField:(char)a14 secureOfflineOnly:(char)a15 shouldStoreAudioOnDevice:(char)a16 continuousListening:(char)a17 shouldHandleCapitalization:(char)a18 isSpeechAPIRequest:(char)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(char)a25 disableDeliveringAsrFeatures:(char)a26 enableEmojiRecognition:(char)a27 enableAutoPunctuation:(char)a28 enableVoiceCommands:(char)a29 sharedUserInfos:(id)a30 prefixText:(id)a31 postfixText:(id)a32 selectedText:(id)a33 powerContext:(id)a34 recognitionStart:(double)a35 shouldGenerateVoiceCommandCandidates:(char)a36 asrId:(id)a37;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(char)a11 detectUtterances:(char)a12 censorSpeech:(char)a13 farField:(char)a14 secureOfflineOnly:(char)a15 shouldStoreAudioOnDevice:(char)a16 continuousListening:(char)a17 shouldHandleCapitalization:(char)a18 isSpeechAPIRequest:(char)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(char)a25 disableDeliveringAsrFeatures:(char)a26 enableEmojiRecognition:(char)a27 enableAutoPunctuation:(char)a28 enableVoiceCommands:(char)a29 sharedUserInfos:(id)a30 prefixText:(id)a31 postfixText:(id)a32 selectedText:(id)a33 powerContext:(id)a34 recognitionStart:(double)a35 shouldGenerateVoiceCommandCandidates:(char)a36 asrId:(id)a37 activeUserInfo:(id)a38;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(char)a11 detectUtterances:(char)a12 censorSpeech:(char)a13 farField:(char)a14 secureOfflineOnly:(char)a15 shouldStoreAudioOnDevice:(char)a16 continuousListening:(char)a17 shouldHandleCapitalization:(char)a18 isSpeechAPIRequest:(char)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(char)a25 disableDeliveringAsrFeatures:(char)a26 sharedUserIds:(id)a27 enableEmojiRecognition:(char)a28 enableAutoPunctuation:(char)a29;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(char)a11 detectUtterances:(char)a12 censorSpeech:(char)a13 farField:(char)a14 secureOfflineOnly:(char)a15 shouldStoreAudioOnDevice:(char)a16 continuousListening:(char)a17 shouldHandleCapitalization:(char)a18 isSpeechAPIRequest:(char)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(char)a25 disableDeliveringAsrFeatures:(char)a26 sharedUserIds:(id)a27 enableEmojiRecognition:(char)a28 enableAutoPunctuation:(char)a29 enableVoiceCommands:(char)a30;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 interactionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(char)a11 detectUtterances:(char)a12 censorSpeech:(char)a13 farField:(char)a14 secureOfflineOnly:(char)a15 shouldStoreAudioOnDevice:(char)a16 continuousListening:(char)a17 shouldHandleCapitalization:(char)a18 isSpeechAPIRequest:(char)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(char)a25 disableDeliveringAsrFeatures:(char)a26;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 interactionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(char)a11 detectUtterances:(char)a12 censorSpeech:(char)a13 farField:(char)a14 secureOfflineOnly:(char)a15 shouldStoreAudioOnDevice:(char)a16 continuousListening:(char)a17 shouldHandleCapitalization:(char)a18 maximumRecognitionDuration:(double)a19 endpointStart:(double)a20 inputOrigin:(id)a21 location:(id)a22 jitGrammar:(id)a23 deliverEagerPackage:(char)a24 disableDeliveringAsrFeatures:(char)a25;

@end
