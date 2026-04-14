@class NSString, SIRINLUEXTERNALCDM_PLANNERCDMPlannerRequestIdentifier;

@interface SIRINLUEXTERNALCDM_PLANNERCdmPlannerRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasJsonTranscript;
@property (retain, nonatomic) NSString *jsonTranscript;
@property (readonly, nonatomic) BOOL hasCdmPlannerRequestIdentifier;
@property (retain, nonatomic) SIRINLUEXTERNALCDM_PLANNERCDMPlannerRequestIdentifier *cdmPlannerRequestIdentifier;

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
