@class SIRINLUEXTERNALNLU_ROUTERNLParseResponse, SIRINLUEXTERNALNLU_ROUTERPommesResponse;

@interface SIRINLUEXTERNALNLU_ROUTERNLRouterTurnProbingResult : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasNlParseResponse;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERNLParseResponse *nlParseResponse;
@property (readonly, nonatomic) BOOL hasPommesResponse;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERPommesResponse *pommesResponse;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
