@class NSMutableArray;

@interface SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *ruleIds;

+ (Class)ruleIdsType;

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
- (id)ruleIdsAtIndex:(unsigned long long)a0;
- (void)addRuleIds:(id)a0;
- (void)clearRuleIds;
- (unsigned long long)ruleIdsCount;

@end
