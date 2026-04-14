@class SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules;

@interface SIRINLUINTERNALSNLP_INTERMEDIATENLv4ExecutedHandcraftedRules : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRules;
@property (retain, nonatomic) SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules *rules;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
