@class AFPowerContextPolicy, NSString, NSArray, NSDictionary, CLLocation, AFASRSharedUserInfo;

@interface LBLocalSpeechRecognitionSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *requestId;
@property (readonly, nonatomic) NSString *inputOrigin;
@property (readonly, nonatomic) unsigned long long speechRecognitionTask;
@property (readonly, nonatomic) unsigned long long speechRecognitionMode;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSArray *jitGrammar;
@property (readonly, nonatomic) NSString *overrideModelPath;
@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) char detectUtterances;
@property (readonly, nonatomic) char continuousListening;
@property (readonly, nonatomic) char shouldHandleCapitalization;
@property (readonly, nonatomic) char secureOfflineOnly;
@property (readonly, nonatomic) double maximumRecognitionDuration;
@property (readonly, nonatomic) NSDictionary *recognitionOverrides;
@property (readonly, nonatomic) char shouldStoreAudioOnDevice;
@property (readonly, nonatomic) char deliverEagerPackage;
@property (readonly, nonatomic) char enableEmojiRecognition;
@property (readonly, nonatomic) char enableAutoPunctuation;
@property (readonly, nonatomic) NSString *UILanguage;
@property (readonly, nonatomic) char enableVoiceCommands;
@property (readonly, nonatomic) NSString *dictationUIInteractionId;
@property (readonly, nonatomic) NSArray *sharedUserInfos;
@property (readonly, nonatomic) NSString *prefixText;
@property (readonly, nonatomic) NSString *postfixText;
@property (readonly, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) AFPowerContextPolicy *powerContext;
@property (readonly, nonatomic) char shouldStartAudioCapture;
@property (readonly, nonatomic) unsigned long long audioCaptureStartHostTime;
@property (readonly, nonatomic) long long audioRecordType;
@property (readonly, nonatomic) NSString *audioRecordDeviceId;
@property (readonly, nonatomic) char shouldGenerateVoiceCommandCandidates;
@property (readonly, nonatomic) NSString *asrLocale;
@property (readonly, nonatomic) AFASRSharedUserInfo *activeUserInfo;

+ (id)getTaskStringFromSpeechRecognitionSettings:(id)a0;
+ (id)taskString:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 speechRecognitionMode:(unsigned long long)a3 location:(id)a4 jitGrammar:(id)a5 overrideModelPath:(id)a6 applicationName:(id)a7 detectUtterances:(char)a8 continuousListening:(char)a9 shouldHandleCapitalization:(char)a10 secureOfflineOnly:(char)a11 maximumRecognitionDuration:(double)a12 recognitionOverrides:(id)a13 shouldStoreAudioOnDevice:(char)a14 deliverEagerPackage:(char)a15 enableEmojiRecognition:(char)a16 enableAutoPunctuation:(char)a17 UILanguage:(id)a18 enableVoiceCommands:(char)a19 dictationUIInteractionId:(id)a20 sharedUserInfos:(id)a21 prefixText:(id)a22 postfixText:(id)a23 selectedText:(id)a24 powerContext:(id)a25 shouldStartAudioCapture:(char)a26 audioCaptureStartHostTime:(unsigned long long)a27 audioRecordType:(long long)a28 audioRecordDeviceId:(id)a29;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 speechRecognitionMode:(unsigned long long)a3 location:(id)a4 jitGrammar:(id)a5 overrideModelPath:(id)a6 applicationName:(id)a7 detectUtterances:(char)a8 continuousListening:(char)a9 shouldHandleCapitalization:(char)a10 secureOfflineOnly:(char)a11 maximumRecognitionDuration:(double)a12 recognitionOverrides:(id)a13 shouldStoreAudioOnDevice:(char)a14 deliverEagerPackage:(char)a15 enableEmojiRecognition:(char)a16 enableAutoPunctuation:(char)a17 UILanguage:(id)a18 enableVoiceCommands:(char)a19 dictationUIInteractionId:(id)a20 sharedUserInfos:(id)a21 prefixText:(id)a22 postfixText:(id)a23 selectedText:(id)a24 powerContext:(id)a25 shouldStartAudioCapture:(char)a26 audioCaptureStartHostTime:(unsigned long long)a27 audioRecordType:(long long)a28 audioRecordDeviceId:(id)a29 shouldGenerateVoiceCommandCandidates:(char)a30 asrLocale:(id)a31;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 speechRecognitionMode:(unsigned long long)a3 location:(id)a4 jitGrammar:(id)a5 overrideModelPath:(id)a6 applicationName:(id)a7 detectUtterances:(char)a8 continuousListening:(char)a9 shouldHandleCapitalization:(char)a10 secureOfflineOnly:(char)a11 maximumRecognitionDuration:(double)a12 recognitionOverrides:(id)a13 shouldStoreAudioOnDevice:(char)a14 deliverEagerPackage:(char)a15 enableEmojiRecognition:(char)a16 enableAutoPunctuation:(char)a17 UILanguage:(id)a18 enableVoiceCommands:(char)a19 dictationUIInteractionId:(id)a20 sharedUserInfos:(id)a21 prefixText:(id)a22 postfixText:(id)a23 selectedText:(id)a24 powerContext:(id)a25 shouldStartAudioCapture:(char)a26 audioCaptureStartHostTime:(unsigned long long)a27 audioRecordType:(long long)a28 audioRecordDeviceId:(id)a29 shouldGenerateVoiceCommandCandidates:(char)a30 asrLocale:(id)a31 activeUserInfo:(id)a32;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(char)a7 continuousListening:(char)a8 shouldHandleCapitalization:(char)a9 secureOfflineOnly:(char)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(char)a7 continuousListening:(char)a8 shouldHandleCapitalization:(char)a9 secureOfflineOnly:(char)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(char)a13;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(char)a7 continuousListening:(char)a8 shouldHandleCapitalization:(char)a9 secureOfflineOnly:(char)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(char)a13 deliverEagerPackage:(char)a14;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(char)a7 continuousListening:(char)a8 shouldHandleCapitalization:(char)a9 secureOfflineOnly:(char)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(char)a13 deliverEagerPackage:(char)a14 enableEmojiRecognition:(char)a15 enableAutoPunctuation:(char)a16 UILanguage:(id)a17 enableVoiceCommands:(char)a18 dictationUIInteractionId:(id)a19 sharedUserInfos:(id)a20;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(char)a7 continuousListening:(char)a8 shouldHandleCapitalization:(char)a9 secureOfflineOnly:(char)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(char)a13 deliverEagerPackage:(char)a14 enableEmojiRecognition:(char)a15 enableAutoPunctuation:(char)a16 UILanguage:(id)a17 enableVoiceCommands:(char)a18 dictationUIInteractionId:(id)a19 sharedUserInfos:(id)a20 prefixText:(id)a21 postfixText:(id)a22 selectedText:(id)a23;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(char)a7 continuousListening:(char)a8 shouldHandleCapitalization:(char)a9 secureOfflineOnly:(char)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(char)a13 deliverEagerPackage:(char)a14 enableEmojiRecognition:(char)a15 enableAutoPunctuation:(char)a16 UILanguage:(id)a17 enableVoiceCommands:(char)a18 dictationUIInteractionId:(id)a19 sharedUserInfos:(id)a20 prefixText:(id)a21 postfixText:(id)a22 selectedText:(id)a23 powerContext:(id)a24;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(char)a7 continuousListening:(char)a8 shouldHandleCapitalization:(char)a9 secureOfflineOnly:(char)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(char)a13 deliverEagerPackage:(char)a14 sharedUserIds:(id)a15;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(char)a7 continuousListening:(char)a8 shouldHandleCapitalization:(char)a9 secureOfflineOnly:(char)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(char)a13 deliverEagerPackage:(char)a14 sharedUserIds:(id)a15 enableEmojiRecognition:(char)a16 enableAutoPunctuation:(char)a17;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(char)a7 continuousListening:(char)a8 shouldHandleCapitalization:(char)a9 secureOfflineOnly:(char)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(char)a13 deliverEagerPackage:(char)a14 sharedUserIds:(id)a15 enableEmojiRecognition:(char)a16 enableAutoPunctuation:(char)a17 UILanguage:(id)a18;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(char)a7 continuousListening:(char)a8 shouldHandleCapitalization:(char)a9 secureOfflineOnly:(char)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(char)a13 deliverEagerPackage:(char)a14 sharedUserIds:(id)a15 enableEmojiRecognition:(char)a16 enableAutoPunctuation:(char)a17 UILanguage:(id)a18 enableVoiceCommands:(char)a19;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(char)a7 continuousListening:(char)a8 shouldHandleCapitalization:(char)a9 secureOfflineOnly:(char)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(char)a13 deliverEagerPackage:(char)a14 sharedUserIds:(id)a15 enableEmojiRecognition:(char)a16 enableAutoPunctuation:(char)a17 UILanguage:(id)a18 enableVoiceCommands:(char)a19 dictationUIInteractionId:(id)a20;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 speechRecognitionMode:(unsigned long long)a3 location:(id)a4 jitGrammar:(id)a5 overrideModelPath:(id)a6 applicationName:(id)a7 detectUtterances:(char)a8 continuousListening:(char)a9 shouldHandleCapitalization:(char)a10 secureOfflineOnly:(char)a11 maximumRecognitionDuration:(double)a12 recognitionOverrides:(id)a13 shouldStoreAudioOnDevice:(char)a14 deliverEagerPackage:(char)a15 enableEmojiRecognition:(char)a16 enableAutoPunctuation:(char)a17 UILanguage:(id)a18 enableVoiceCommands:(char)a19 dictationUIInteractionId:(id)a20 sharedUserInfos:(id)a21 prefixText:(id)a22 postfixText:(id)a23 selectedText:(id)a24 powerContext:(id)a25 shouldStartAudioCapture:(char)a26 audioCaptureStartHostTime:(unsigned long long)a27 audioRecordType:(long long)a28 audioRecordDeviceId:(id)a29 shouldGenerateVoiceCommandCandidates:(char)a30;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 speechRecognitionMode:(unsigned long long)a3 location:(id)a4 jitGrammar:(id)a5 overrideModelPath:(id)a6 applicationName:(id)a7 detectUtterances:(char)a8 continuousListening:(char)a9 shouldHandleCapitalization:(char)a10 secureOfflineOnly:(char)a11 maximumRecognitionDuration:(double)a12 recognitionOverrides:(id)a13 shouldStoreAudioOnDevice:(char)a14 deliverEagerPackage:(char)a15 enableEmojiRecognition:(char)a16 enableAutoPunctuation:(char)a17 enableVoiceCommands:(char)a18 dictationUIInteractionId:(id)a19 sharedUserInfos:(id)a20 prefixText:(id)a21 postfixText:(id)a22 selectedText:(id)a23 powerContext:(id)a24 shouldStartAudioCapture:(char)a25 audioCaptureStartHostTime:(unsigned long long)a26 audioRecordType:(long long)a27 audioRecordDeviceId:(id)a28 shouldGenerateVoiceCommandCandidates:(char)a29 asrLocale:(id)a30;

@end
