@class SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules, NSString;

@interface SIRINLUINTERNALSNLP_INTERMEDIATEITFMExecutedHandcraftedRules : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRules;
@property (retain, nonatomic) SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules *rules;
@property (readonly, nonatomic) BOOL hasModelType;
@property (retain, nonatomic) NSString *modelType;

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
