@class NSString, SIRINLUEXTERNALCDM_PLANNERCDMPlannerRequestIdentifier;

@interface SIRINLUEXTERNALCDM_PLANNERCdmPlannerRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasJsonTranscript;
@property (retain, nonatomic) NSString *jsonTranscript;
@property (readonly, nonatomic) char hasCdmPlannerRequestIdentifier;
@property (retain, nonatomic) SIRINLUEXTERNALCDM_PLANNERCDMPlannerRequestIdentifier *cdmPlannerRequestIdentifier;

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

@end
