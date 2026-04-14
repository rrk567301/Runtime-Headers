@class NSArray, SiriSharedUISAEUserUtteranceViewModel, SiriSharedUIMiniSnippetModel;

@interface SiriSharedUISAEViewModel : NSObject <NSCopying> {
    void /* function */ conversationTranscriptItems;
    void /* function */ serverUtterances;
}

@property (nonatomic, readonly) long long inputType;
@property (nonatomic, readonly) NSArray *conversationTranscriptItems;
@property (nonatomic, readonly) NSArray *serverUtterances;
@property (nonatomic, readonly) SiriSharedUISAEUserUtteranceViewModel *userUtterance;
@property (nonatomic, readonly) SiriSharedUIMiniSnippetModel *miniSnippetModel;
@property (nonatomic, readonly) BOOL shouldPreserveResultSpace;

- (id)copyWithZone:(void *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithConversationTranscriptItems:(id)a0 serverUtterances:(id)a1 speechRecognitionHypothesis:(id)a2;
- (id)copyWithConversationTranscriptItems:(id)a0 serverUtterances:(id)a1 speechRecognitionHypothesis:(id)a2 miniSnippetModel:(id)a3;
- (id)copyWithInputType:(long long)a0;
- (id)copyWithInputType:(long long)a0 conversationTranscriptItems:(id)a1 serverUtterances:(id)a2 speechRecognitionHypothesis:(id)a3 miniSnippetModel:(id)a4 shouldPreserveResultSpace:(BOOL)a5;
- (id)copyWithInputType:(long long)a0 conversationTranscriptItems:(id)a1 serverUtterances:(id)a2 speechRecognitionHypothesis:(id)a3 shouldPreserveResultSpace:(BOOL)a4;
- (id)copyWithInputType:(long long)a0 conversationTranscriptItems:(id)a1 serverUtterances:(id)a2 userUtterance:(id)a3 miniSnippetModel:(id)a4 shouldPreserveResultSpace:(BOOL)a5;
- (id)copyWithInputType:(long long)a0 conversationTranscriptItems:(id)a1 serverUtterances:(id)a2 userUtterance:(id)a3 shouldPreserveResultSpace:(BOOL)a4;
- (id)copyWithMiniSnippetModel:(id)a0;
- (id)copyWithServerUtterances:(id)a0 speechRecognitionHypothesis:(id)a1;
- (id)copyWithServerUtterances:(id)a0 speechRecognitionHypothesis:(id)a1 miniSnippetModel:(id)a2;
- (id)copyWithSpeechRecognitionHypothesis:(id)a0;
- (id)copyWithUserUtterance:(id)a0;
- (id)initWithInputType:(long long)a0 conversationTranscriptItems:(id)a1 serverUtterances:(id)a2 userUtterance:(id)a3 miniSnippetModel:(id)a4 shouldPreserveResultSpace:(BOOL)a5;
- (id)initWithInputType:(long long)a0 conversationTranscriptItems:(id)a1 serverUtterances:(id)a2 userUtterance:(id)a3 shouldPreserveResultSpace:(BOOL)a4;

@end
