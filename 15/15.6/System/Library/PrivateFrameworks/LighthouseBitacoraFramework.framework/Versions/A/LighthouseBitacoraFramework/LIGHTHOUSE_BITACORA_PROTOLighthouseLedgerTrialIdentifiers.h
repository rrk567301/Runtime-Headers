@class LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers, LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers;

@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasExperimentIdentifiers;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers *experimentIdentifiers;
@property (readonly, nonatomic) char hasBmltIdentifiers;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers *bmltIdentifiers;

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
