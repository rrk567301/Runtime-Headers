@class SFCard;

@interface MSParsecSearchSessionInstantAnswer : MSParsecSearchSessionMessageResult

@property (readonly, nonatomic) SFCard *inlineCard;
@property (readonly, nonatomic) char isInstantAnswerUpdated;

+ (id)instantAnswerWithIdentifier:(id)a0 date:(id)a1 inlineCard:(id)a2 isInstantAnswerUpdated:(char)a3;

- (void).cxx_destruct;
- (id)feedbackResult;
- (id)initWithIdentifier:(id)a0 date:(id)a1 inlineCard:(id)a2 isInstantAnswerUpdated:(char)a3;

@end
