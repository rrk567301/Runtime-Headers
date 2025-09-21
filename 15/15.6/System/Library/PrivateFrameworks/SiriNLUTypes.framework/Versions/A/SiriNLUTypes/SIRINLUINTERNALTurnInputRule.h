@class SIRINLUINTERNALUtteranceRule, NSMutableArray;

@interface SIRINLUINTERNALTurnInputRule : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasUtteranceRule;
@property (retain, nonatomic) SIRINLUINTERNALUtteranceRule *utteranceRule;
@property (retain, nonatomic) NSMutableArray *positiveContextRules;
@property (retain, nonatomic) NSMutableArray *negativeContextRules;

+ (Class)negativeContextRulesType;
+ (Class)positiveContextRulesType;

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
- (void)addNegativeContextRules:(id)a0;
- (void)addPositiveContextRules:(id)a0;
- (void)clearNegativeContextRules;
- (void)clearPositiveContextRules;
- (id)negativeContextRulesAtIndex:(unsigned long long)a0;
- (unsigned long long)negativeContextRulesCount;
- (id)positiveContextRulesAtIndex:(unsigned long long)a0;
- (unsigned long long)positiveContextRulesCount;

@end
