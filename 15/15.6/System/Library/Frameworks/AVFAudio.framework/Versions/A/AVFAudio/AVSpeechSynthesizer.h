@class NSArray;
@protocol AVSpeechSynthesizerDelegate;

@interface AVSpeechSynthesizer : NSObject

@property (class, readonly, nonatomic) unsigned long long personalVoiceAuthorizationStatus;

@property (weak, nonatomic) id<AVSpeechSynthesizerDelegate> delegate;
@property (readonly, nonatomic, getter=isSpeaking) char speaking;
@property (readonly, nonatomic, getter=isPaused) char paused;
@property (retain, nonatomic) NSArray *outputChannels;
@property (nonatomic) char usesApplicationAudioSession;
@property (nonatomic) char mixToTelephonyUplink;

+ (void)initialize;
+ (void)requestPersonalVoiceAuthorizationWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (char)continueSpeaking;
- (char)pauseSpeakingAtBoundary:(long long)a0;
- (char)stopSpeakingAtBoundary:(long long)a0;
- (void)speakUtterance:(id)a0;
- (void)writeUtterance:(id)a0 toBufferCallback:(id /* block */)a1;
- (void)writeUtterance:(id)a0 toBufferCallback:(id /* block */)a1 toMarkerCallback:(id /* block */)a2;

@end
