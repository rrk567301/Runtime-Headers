@class SIRINLUINTERNALUtteranceRule, NSMutableArray;

@interface SIRINLUINTERNALTurnInputRule : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUtteranceRule;
@property (retain, nonatomic) SIRINLUINTERNALUtteranceRule *utteranceRule;
@property (retain, nonatomic) NSMutableArray *positiveContextRules;
@property (retain, nonatomic) NSMutableArray *negativeContextRules;

+ (Class)positiveContextRulesType;
+ (Class)negativeContextRulesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addPositiveContextRules:(id)a0;
- (void)addNegativeContextRules:(id)a0;
- (unsigned long long)positiveContextRulesCount;
- (void)clearPositiveContextRules;
- (id)positiveContextRulesAtIndex:(unsigned long long)a0;
- (unsigned long long)negativeContextRulesCount;
- (void)clearNegativeContextRules;
- (id)negativeContextRulesAtIndex:(unsigned long long)a0;

@end
