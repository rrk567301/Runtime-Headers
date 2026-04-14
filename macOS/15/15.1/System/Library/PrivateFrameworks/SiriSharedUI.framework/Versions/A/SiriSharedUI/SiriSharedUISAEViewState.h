@class SiriSharedUILatencyViewModel, NSArray, SiriSharedUISmartDialogView, NSString, NSMutableArray, SRUIFSpeechRecognitionHypothesis;
@protocol SiriSharedUISAEViewStateDelegate;

@interface SiriSharedUISAEViewState : NSObject <SiriSharedUICompactViewModelChangeObserving>

@property (copy, nonatomic, getter=_activeTranscriptItems, setter=_setActiveTranscriptItems:) NSArray *activeTranscriptItems;
@property (copy, nonatomic, setter=_setActiveConversationTranscriptItems:) NSArray *activeConversationTranscriptItems;
@property (copy, nonatomic, setter=_setSmartDialogServerUtterances:) NSArray *serverUtterances;
@property (copy, nonatomic, setter=_setSmartDialogSpeechRecognitionHypothesis:) SRUIFSpeechRecognitionHypothesis *speechRecognitionHypothesis;
@property (copy, nonatomic, setter=_setSmartDialogLatencyViewModel:) SiriSharedUILatencyViewModel *latencyViewModel;
@property (nonatomic) BOOL hasSmartDialogSnippet;
@property (weak, nonatomic) id<SiriSharedUISAEViewStateDelegate> delegate;
@property (nonatomic) BOOL alwaysShowSpeech;
@property (nonatomic) BOOL isInAmbient;
@property (retain, nonatomic) SiriSharedUISmartDialogView *activeSmartDialogView;
@property (readonly, nonatomic) NSMutableArray *finalAndDisplayedSmartDialogs;
@property (nonatomic) BOOL activeViewModelHasSnippets;
@property (nonatomic) BOOL activeSmartDialogPresented;
@property (readonly, nonatomic) NSArray *storedConversationTranscriptItems;
@property (nonatomic) long long inputType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_setSmartDialogPlugin:(id)a0;
- (void)compactViewModelDidChange:(id)a0 withDiff:(unsigned long long)a1;
- (void)_setIsPresentedWithSmartDialogText;
- (void)_setSmartDialogCard:(id)a0;
- (BOOL)requireFinalSpeechHypothesisBeforeAppearance;

@end
