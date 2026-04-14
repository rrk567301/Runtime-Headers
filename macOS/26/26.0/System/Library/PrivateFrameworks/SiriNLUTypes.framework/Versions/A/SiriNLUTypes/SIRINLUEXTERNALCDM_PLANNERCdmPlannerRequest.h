@class NSString, SIRINLUEXTERNALCDM_PLANNERCDMPlannerRequestIdentifier;

@interface SIRINLUEXTERNALCDM_PLANNERCdmPlannerRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasJsonTranscript;
@property (retain, nonatomic) NSString *jsonTranscript;
@property (readonly, nonatomic) BOOL hasCdmPlannerRequestIdentifier;
@property (retain, nonatomic) SIRINLUEXTERNALCDM_PLANNERCDMPlannerRequestIdentifier *cdmPlannerRequestIdentifier;

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
