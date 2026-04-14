@class SIRINLUEXTERNALTurnInput, SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest;

@interface CDMMentionDetectorRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest *mdRequest;
@property (readonly, nonatomic) SIRINLUEXTERNALTurnInput *turnInput;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMDRequest:(id)a0 withCurrTurn:(id)a1;

@end
