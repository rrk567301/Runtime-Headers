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
@property (nonatomic, weak) void /* function */ viewModelChangeObserver;
@property (nonatomic, retain) SiriSharedUISAEViewModel *viewModel;

- (void).cxx_destruct;
- (id)init;
- (BOOL)alwaysShowRecognizedSpeech;
- (long long)inputType;
- (void)clearLatencySummary;
- (void)conversationDidChangeWithTransaction:(id)a0;
- (void)didReceiveLatencyInformation:(id)a0;
- (id)initWithConversation:(id)a0 delegate:(id)a1;
- (id)initWithConversation:(id)a0 miniSnippetModel:(id)a1 delegate:(id)a2;
- (void)inputTypeDidChange;
- (void)revealLatencyView;
- (void)revealUserUtterance:(id)a0 backingAceObject:(id)a1;
- (void)updateCurrentRequestText:(id)a0;
- (unsigned long long)_generateDiffFromViewModel:(id)a0 toViewModel:(id)a1;
- (void)_notifyObserverOfViewModelChangeWithDiff:(unsigned long long)a0;
- (void)_processUpdatedConversationItemsAtIndexPaths:(id)a0;
- (void)processInitialConversationItemsFor:(id)a0 miniSnippetModel:(id)a1;
- (void)processInsertedConversationItemsWith:(id)a0 for:(id)a1 miniSnippetModel:(id)a2;
- (void)resetViewsAndClearASR:(BOOL)a0;
- (void)revealUserUtterance:(id)a0 backingAceObject:(id)a1 asrAlternatives:(id)a2;
- (id)serverUtterancesToDisplayForConversation:(id)a0;
- (void)updateMiniSnippetModel:(id)a0;
- (void)updateMiniSnippetModelWithMiniSnippetInformation:(id)a0;
- (id)userUtteranceForConversationItem:(id)a0;

@end
