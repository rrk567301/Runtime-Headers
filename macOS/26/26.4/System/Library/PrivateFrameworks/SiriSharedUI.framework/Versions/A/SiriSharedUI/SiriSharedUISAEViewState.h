@class SAEViewModelUpdates, NSArray, SiriSharedUIMiniSnippetModel, SiriSharedUISystemAssistantExperienceContainerView, SiriSharedUISAEUserUtteranceViewModel, NSString, SiriSharedUISmartDialogView;
@protocol SiriSharedUISAEViewStateDelegate;

@interface SiriSharedUISAEViewState : NSObject <SiriSharedUISAEViewModelChangeObserving, SiriSharedUIMiniSnippetModelDelegate> {
    BOOL _animatingInActiveSmartDialogView;
    BOOL _doNotReplaceSmartDialogForSiriMail;
    SAEViewModelUpdates *_pendingViewModelUpdate;
}

@property (copy, nonatomic, getter=_activeTranscriptItems, setter=_setActiveTranscriptItems:) NSArray *activeTranscriptItems;
@property (copy, nonatomic, setter=_setActiveConversationTranscriptItems:) NSArray *activeConversationTranscriptItems;
@property (copy, nonatomic, setter=_setSmartDialogServerUtterances:) NSArray *serverUtterances;
@property (copy, nonatomic, setter=_setSmartDialogUserUtterance:) SiriSharedUISAEUserUtteranceViewModel *userUtterance;
@property (copy, nonatomic, setter=_setMiniSnippetModel:) SiriSharedUIMiniSnippetModel *miniSnippetModel;
@property (copy, nonatomic) NSArray *previousConversationTranscriptItems;
@property (nonatomic) BOOL hasSmartDialogSnippet;
@property (nonatomic) BOOL isDisplayingLatency;
@property (nonatomic) BOOL isDisplayingGenerativeAssistantToolsSnippet;
@property (retain, nonatomic) SiriSharedUISystemAssistantExperienceContainerView *containerView;
@property (nonatomic) int currentViewState;
@property (nonatomic) int previousViewState;
@property (nonatomic) long long resultPresentationMode;
@property (weak, nonatomic) id<SiriSharedUISAEViewStateDelegate> delegate;
@property (nonatomic) BOOL isInAmbient;
@property (retain, nonatomic) SiriSharedUISmartDialogView *activeSmartDialogView;
@property (retain, nonatomic) SiriSharedUISmartDialogView *finalAndDisplayedSmartDialog;
@property (readonly, nonatomic) BOOL upcomingResultHasSnippet;
@property (readonly, nonatomic) NSArray *storedConversationTranscriptItems;
@property (readonly, nonatomic) BOOL activeSmartDialogIsLatencyPill;
@property (nonatomic) long long inputType;
@property (readonly, nonatomic) BOOL shouldPreserveResultSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerView:(id)a0;
- (void)_setState:(int)a0;
- (void).cxx_destruct;
- (void)latencyStateInterrupted;
- (void)responseHandledInApp;
- (void)setResultPresentationModeWithoutAnimation:(long long)a0;
- (void)setSmartDialogAnimationInProgress:(BOOL)a0;
- (void)saeViewModelDidChange:(id)a0 withDiff:(unsigned long long)a1;
- (void)_presentOrTransitionActiveSmartDialogView;
- (void)_presentPillOrCollapseResult;
- (void)_presentResult;
- (void)_resetActiveSmartDialogView;
- (void)_resetFinalAndDisplayedSmartDialogView;
- (void)_setIsPresentedWithSmartDialogText;
- (void)_setSmartDialogCard:(id)a0 withAttributionCardSections:(id)a1;
- (void)_setSmartDialogPlugin:(id)a0 attribution:(id)a1;
- (void)_setState:(int)a0 isRemoval:(BOOL)a1;
- (void)_smartDialogContentDidChange;
- (void)removeResponseElements:(unsigned long long)a0;
- (BOOL)requireFinalSpeechHypothesisBeforeAppearance;
- (id)responseUISummary;
- (void)updateDoNotReplaceSmartDialogForSiriMail:(id)a0 conversationTranscriptItems:(id)a1 shouldPreserveResultSpace:(BOOL)a2;
- (void)updateSoftwareFallbackTextForMiniSnippet:(id)a0;

@end
