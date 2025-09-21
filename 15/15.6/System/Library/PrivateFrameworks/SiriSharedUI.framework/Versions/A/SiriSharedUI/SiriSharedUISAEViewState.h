@class NSArray, SiriSharedUISystemAssistantExperienceContainerView, NSString, SiriSharedUISAEUserUtteranceViewModel, NSMutableArray, SiriSharedUISmartDialogView;
@protocol SiriSharedUISAEViewStateDelegate;

@interface SiriSharedUISAEViewState : NSObject <SiriSharedUISAEViewModelChangeObserving> {
    char _animatingInActiveSmartDialogView;
    id /* block */ _cachedPresentResultBlock;
    char _doNotReplaceSmartDialogForSiriMail;
}

@property (copy, nonatomic, getter=_activeTranscriptItems, setter=_setActiveTranscriptItems:) NSArray *activeTranscriptItems;
@property (copy, nonatomic, setter=_setActiveConversationTranscriptItems:) NSArray *activeConversationTranscriptItems;
@property (copy, nonatomic, setter=_setSmartDialogServerUtterances:) NSArray *serverUtterances;
@property (copy, nonatomic, setter=_setSmartDialogUserUtterance:) SiriSharedUISAEUserUtteranceViewModel *userUtterance;
@property (copy, nonatomic) NSArray *previousConversationTranscriptItems;
@property (nonatomic) char hasSmartDialogSnippet;
@property (nonatomic) char isDisplayingLatency;
@property (retain, nonatomic) SiriSharedUISystemAssistantExperienceContainerView *containerView;
@property (nonatomic) int currentViewState;
@property (nonatomic) int previousViewState;
@property (weak, nonatomic) id<SiriSharedUISAEViewStateDelegate> delegate;
@property (nonatomic) char isInAmbient;
@property (retain, nonatomic) SiriSharedUISmartDialogView *activeSmartDialogView;
@property (readonly, nonatomic) NSMutableArray *finalAndDisplayedSmartDialogs;
@property (readonly, nonatomic) char upcomingResultHasSnippet;
@property (readonly, nonatomic) NSArray *storedConversationTranscriptItems;
@property (readonly, nonatomic) char activeSmartDialogIsLatencyPill;
@property (nonatomic) long long inputType;
@property (readonly, nonatomic) char shouldPreserveResultSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setState:(int)a0;
- (id)initWithContainerView:(id)a0;
- (void)latencyStateInterrupted;
- (void)responseHandledInApp;
- (void)setSmartDialogAnimationInProgress:(char)a0;
- (void)saeViewModelDidChange:(id)a0 withDiff:(unsigned long long)a1;
- (void)_presentOrTransitionActiveSmartDialogView;
- (void)_presentPillOrCollapseResult;
- (void)_presentResult;
- (void)_setIsPresentedWithSmartDialogText;
- (void)_setSmartDialogCard:(id)a0;
- (void)_setSmartDialogPlugin:(id)a0;
- (void)_smartDialogContentDidChange;
- (void)removeResponseElements:(unsigned long long)a0;
- (char)requireFinalSpeechHypothesisBeforeAppearance;
- (void)updateDoNotReplaceSmartDialogForSiriMail:(id)a0 conversationTranscriptItems:(id)a1 shouldPreserveResultSpace:(char)a2;

@end
