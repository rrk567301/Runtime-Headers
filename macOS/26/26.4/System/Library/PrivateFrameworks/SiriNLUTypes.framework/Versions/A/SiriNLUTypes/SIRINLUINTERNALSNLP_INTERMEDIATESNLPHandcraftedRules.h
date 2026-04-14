@class NSMutableArray;

@interface SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *ruleIds;

+ (Class)ruleIdsType;

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
- (id)ruleIdsAtIndex:(unsigned long long)a0;
- (void)addRuleIds:(id)a0;
- (void)clearRuleIds;
- (unsigned long long)ruleIdsCount;

@end
