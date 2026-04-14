@class NSString, NSTimer, NSArray, NSLock;

@interface SCRSpeechSynthesizerVars : NSObject

@property (retain, nonatomic) NSLock *_generalLock;
@property (retain, nonatomic) id delegate;
@property (copy) NSString *speakingString;
@property (copy, nonatomic) NSString *currentVoiceIdentifier;
@property (nonatomic) BOOL usingDefaultVoice;
@property (nonatomic) BOOL usesFeedbackWindow;
@property (nonatomic) BOOL speakingSpeechFeedbackServices;
@property (retain, nonatomic) NSTimer *speechFeedbackServicesTimer;
@property (nonatomic) BOOL needsResyncWithDefaultVoice;
@property (nonatomic) BOOL speechFinishedSuccessfully;
@property (nonatomic) BOOL synthesizerIsRetained;
@property (nonatomic) BOOL skipSpeechDoneToggle;
@property (nonatomic) BOOL makeCallbacksOnTTSThread;
@property (nonatomic) BOOL isSpeaking;
@property (nonatomic) unsigned int audioDeviceID;
@property (readonly, nonatomic) BOOL isAppleVoice;
@property (readonly, nonatomic) struct SpeechChannelRecord { long long x0[1]; } *speechChannel;
@property (readonly, nonatomic) unsigned int currentVoiceScriptCode;
@property (readonly, nonatomic) float normalSpeakingRate;
@property (readonly, nonatomic) float normalPitchBase;
@property (readonly, nonatomic) float normalPitchMod;
@property (readonly, nonatomic) NSArray *supportedCharacterRanges;
@property (readonly, nonatomic) NSArray *supportedLiteralCharacterRanges;

+ (BOOL)findVoiceByIdentifier:(id)a0 returningCreator:(unsigned int *)a1 returningID:(unsigned int *)a2;
+ (id)voiceIdentifierForVoiceCreator:(unsigned int)a0 voiceID:(unsigned int)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (short)setSpeechChannelWithVoiceCreator:(unsigned int)a0 voiceID:(unsigned int)a1;
- (short)setSpeechChannelWithVoiceIdentifier:(id)a0;
- (void)resetChannel;

@end
