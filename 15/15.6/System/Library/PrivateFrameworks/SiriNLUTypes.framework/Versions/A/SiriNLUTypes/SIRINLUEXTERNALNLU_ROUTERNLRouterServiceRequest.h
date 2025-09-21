@class SIRINLUEXTERNALNLU_ROUTERQueryDecorationOutput, NSString, SIRINLUEXTERNALNLU_ROUTERNLRouterTurnContext, SIRINLUEXTERNALNLU_ROUTERNLRouterTurnProbingResult, NSMutableArray;

@interface SIRINLUEXTERNALNLU_ROUTERNLRouterServiceRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasCurrentUserQuery;
@property (retain, nonatomic) NSString *currentUserQuery;
@property (readonly, nonatomic) char hasTurnContext;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERNLRouterTurnContext *turnContext;
@property (retain, nonatomic) NSMutableArray *conversationHistorys;
@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) char hasTrpCandidateId;
@property (retain, nonatomic) NSString *trpCandidateId;
@property (readonly, nonatomic) char hasProbingResult;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERNLRouterTurnProbingResult *probingResult;
@property (readonly, nonatomic) char hasQueryDecorationOutput;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERQueryDecorationOutput *queryDecorationOutput;

+ (Class)conversationHistoryType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addConversationHistory:(id)a0;
- (void)clearConversationHistorys;
- (id)conversationHistoryAtIndex:(unsigned long long)a0;
- (unsigned long long)conversationHistorysCount;

@end
