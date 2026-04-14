@class SIRINLUEXTERNALNLU_ROUTERNLParseResponse, SIRINLUEXTERNALNLU_ROUTERPommesResponse;

@interface SIRINLUEXTERNALNLU_ROUTERNLRouterTurnProbingResult : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasNlParseResponse;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERNLParseResponse *nlParseResponse;
@property (readonly, nonatomic) BOOL hasPommesResponse;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERPommesResponse *pommesResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
