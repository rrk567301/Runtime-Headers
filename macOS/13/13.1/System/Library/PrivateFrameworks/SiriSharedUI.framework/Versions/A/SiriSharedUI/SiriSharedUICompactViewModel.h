@class NSArray, SRUIFSpeechRecognitionHypothesis;

@interface SiriSharedUICompactViewModel : NSObject <NSCopying>

@property (readonly, nonatomic) long long inputType;
@property (readonly, copy, nonatomic) NSArray *resultTranscriptItems;
@property (readonly, copy, nonatomic) NSArray *conversationTranscriptItems;
@property (readonly, copy, nonatomic) NSArray *serverUtterances;
@property (readonly, copy, nonatomic) SRUIFSpeechRecognitionHypothesis *speechRecognitionHypothesis;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithInputType:(long long)a0 resultTranscriptItems:(id)a1 conversationTranscriptItems:(id)a2 serverUtterances:(id)a3 speechRecognitionHypothesis:(id)a4;
- (id)initWithInputType:(long long)a0 speechRecognitionHypothesis:(id)a1;
- (id)copyWithInputType:(long long)a0 resultTranscriptItems:(id)a1 conversationTranscriptItems:(id)a2 serverUtterances:(id)a3 speechRecognitionHypothesis:(id)a4;
- (id)copyWithResultTranscriptItems:(id)a0 conversationTranscriptItems:(id)a1 serverUtterances:(id)a2 speechRecognitionHypothesis:(id)a3;
- (id)copyWithConversationTranscriptItems:(id)a0 serverUtterances:(id)a1 speechRecognitionHypothesis:(id)a2;
- (id)copyWithInputType:(long long)a0;
- (id)copyWithResultTranscriptItems:(id)a0;
- (id)copyWithSpeechRecognitionHypothesis:(id)a0;
- (id)copyWithServerUtterances:(id)a0 speechRecognitionHypothesis:(id)a1;

@end
