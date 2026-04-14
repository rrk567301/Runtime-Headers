@class AFConversation, NSArray, NSDictionary, SiriSharedUISAEViewModel;

@interface SiriSharedUISAEViewModelController : NSObject {
    void /* function */ serverUtteranceConversationIds;
    void /* function */ storedTranscriptItems;
    void /* unknown type, empty encoding */ inputType;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, retain) AFConversation *conversation;
@property (nonatomic) BOOL immersiveExperienceOn;
@property (nonatomic, copy) NSDictionary *serverUtteranceConversationIds;
@property (nonatomic, copy) NSArray *storedTranscriptItems;
@property (nonatomic, retain) AFConversation *previousConversation;
@property (nonatomic, weak) void /* function */ viewModelChangeObserver;
@property (nonatomic, retain) SiriSharedUISAEViewModel *viewModel;

- (id)init;
- (BOOL)alwaysShowRecognizedSpeech;
- (void).cxx_destruct;
- (long long)inputType;
- (void)clearLatencySummary;
- (void)conversationDidChangeWithTransaction:(id)a0;
- (void)didReceiveLatencyInformation:(id)a0;
- (id)initWithConversation:(id)a0 delegate:(id)a1;
- (void)inputTypeDidChange;
- (void)revealLatencyView;
- (void)revealUserUtterance:(id)a0 backingAceObject:(id)a1;
- (void)updateCurrentRequestText:(id)a0;
- (unsigned long long)_generateDiffFromViewModel:(id)a0 toViewModel:(id)a1;
- (void)_notifyObserverOfViewModelChangeWithDiff:(unsigned long long)a0;
- (void)_processInitialConversationItemsForConversation:(id)a0;
- (void)_processInsertedConversationItemsForConversationItems:(id)a0 forConversation:(id)a1;
- (void)_processUpdatedConversationItemsAtIndexPaths:(id)a0;
- (void)clearLatencySummaryWithoutViewUpdate;
- (void)resetViewsAndClearASR:(BOOL)a0;
- (void)revealUserUtterance:(id)a0 backingAceObject:(id)a1 asrAlternatives:(id)a2;
- (id)serverUtterancesToDisplayForConversation:(id)a0;
- (id)userUtteranceForConversationItem:(id)a0;

@end
