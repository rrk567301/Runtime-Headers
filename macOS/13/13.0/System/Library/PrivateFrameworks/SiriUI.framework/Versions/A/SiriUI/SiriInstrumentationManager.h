@class SAUIAssistantUtteranceView, NSObject, AFAnalyticsTurnBasedInstrumentationContext;
@protocol OS_dispatch_queue;

@interface SiriInstrumentationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationTurnContext;
@property (retain) SAUIAssistantUtteranceView *assistantUtteranceViewSnapShot;
@property int lastSiriUIStateSnapShot;
@property int currentInvocationSource;

+ (id)sharedManager;

- (id)_init;
- (void).cxx_destruct;
- (void)emitInstrumentationEvent:(id)a0 requiresNewTurn:(BOOL)a1 previousTurnId:(id)a2;
- (void)_emitInstrumentation:(id)a0;
- (id)_startNewTurnWithLastTurn:(id)a0;
- (void)snapshotCurrentAssistantUtteranceView:(id)a0;
- (void)clearCurrentInstrumentationTurnContext;
- (void)emitInvocationEventUsingRequestOptions:(id)a0;
- (void)emitInvocationEventForGuideButtonPressed;
- (void)emitInvocationEventForVoiceTriggerEnrollment;
- (void)setInvocationSourceForWaveformGlyphButtonPressed;
- (void)emitInvocationEventForTapToEdit:(id)a0;
- (void)emitUIStateTransitionEventWithFromState:(int)a0 toState:(int)a1;
- (void)emitUIStateTransitionToDismissedStateWithDismissalReason:(int)a0;
- (void)emitPartialSpeechTranscriptionEventWith:(id)a0;
- (void)emitFinalSpeechTranscriptionEventWith:(id)a0;
- (void)emitUUFRPresentedEventWith:(id)a0 dialogPhase:(id)a1;
- (void)emitUUFRPresentedEventWith:(id)a0 dialogIdentifier:(id)a1 dialogPhase:(id)a2;
- (void)emitPunchOutInvocationWithSiriViewController:(id)a0;
- (void)emitPunchOutEventWithURL:(id)a0 appID:(id)a1 previousTurnIdentifier:(id)a2;
- (void)emitTextToSpeechBeginEvent;
- (void)emitTextToSpeechEndEvent;
- (void)emitDialogOutputEventWith:(id)a0 canUseServerTTS:(BOOL)a1 spokenDialogOutput:(id)a2 displayedDialogOutput:(id)a3;
- (unsigned int)audioDevice:(unsigned int)a0 propertyUInt32:(unsigned int)a1;

@end
