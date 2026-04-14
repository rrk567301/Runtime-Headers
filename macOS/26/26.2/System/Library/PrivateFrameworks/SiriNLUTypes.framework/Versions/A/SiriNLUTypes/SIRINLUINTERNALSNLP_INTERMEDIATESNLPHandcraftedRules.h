@class NSMutableArray;

@interface SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *ruleIds;

+ (Class)ruleIdsType;

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
- (id)ruleIdsAtIndex:(unsigned long long)a0;
- (void)addRuleIds:(id)a0;
- (void)clearRuleIds;
- (unsigned long long)ruleIdsCount;

@end
