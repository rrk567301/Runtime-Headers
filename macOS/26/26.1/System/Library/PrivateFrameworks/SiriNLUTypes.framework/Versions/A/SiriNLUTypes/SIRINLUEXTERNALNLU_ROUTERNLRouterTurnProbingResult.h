@class SIRINLUEXTERNALNLU_ROUTERNLParseResponse, SIRINLUEXTERNALNLU_ROUTERPommesResponse;

@interface SIRINLUEXTERNALNLU_ROUTERNLRouterTurnProbingResult : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasNlParseResponse;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERNLParseResponse *nlParseResponse;
@property (readonly, nonatomic) BOOL hasPommesResponse;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERPommesResponse *pommesResponse;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
