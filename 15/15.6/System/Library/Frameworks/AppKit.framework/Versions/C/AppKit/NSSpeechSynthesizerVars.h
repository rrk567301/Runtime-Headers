@class NSString, _NSPeriodicInvoker;
@protocol NSSpeechSynthesizerDelegate;

@interface NSSpeechSynthesizerVars : NSObject {
    struct SpeechChannelRecord { long long x0[1]; } *_speechChannel;
    _NSPeriodicInvoker *_speechFeedbackServicesInvoker;
    unsigned int _speechFeedbackServicesRef;
    NSString *_currentVoice;
    float _normalSpeakingRate;
    char _usingDefaultVoice;
    char _usesFeedbackWindow;
    char _speakingSpeechFeedbackServices;
    char _needsResyncWithDefaultVoice;
    char _speechFinishedSuccessfully;
    char _synthesizerIsRetained;
}

@property (weak) id<NSSpeechSynthesizerDelegate> delegate;
@property (readonly) struct SpeechChannelRecord { long long x0[1]; } *speechChannel;
@property (readonly) unsigned int speechFeedbackServicesRef;
@property (retain) _NSPeriodicInvoker *speechFeedbackServicesInvoker;
@property (copy) NSString *currentVoiceIdentifier;
@property (readonly) float normalSpeakingRate;
@property char usingDefaultVoice;
@property char usesFeedbackWindow;
@property char speakingSpeechFeedbackServices;
@property char needsResyncWithDefaultVoice;
@property char speechFinishedSuccessfully;
@property char synthesizerIsRetained;

+ (char)findVoiceByIdentifier:(id)a0 returningCreator:(unsigned int *)a1 returningID:(unsigned int *)a2;
+ (id)voiceIdentifierForVoiceCreator:(unsigned int)a0 voiceID:(unsigned int)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (short)setSpeechChannelWithVoiceCreator:(unsigned int)a0 voiceID:(unsigned int)a1;
- (short)setSpeechChannelWithVoiceIdentifier:(id)a0;

@end
