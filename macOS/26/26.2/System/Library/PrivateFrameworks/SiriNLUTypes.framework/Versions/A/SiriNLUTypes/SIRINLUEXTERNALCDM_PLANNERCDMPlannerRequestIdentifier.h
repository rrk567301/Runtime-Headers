@class NSString;

@interface SIRINLUEXTERNALCDM_PLANNERCDMPlannerRequestIdentifier : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) BOOL hasClientSessionId;
@property (retain, nonatomic) NSString *clientSessionId;
@property (readonly, nonatomic) BOOL hasClientRequestId;
@property (retain, nonatomic) NSString *clientRequestId;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
