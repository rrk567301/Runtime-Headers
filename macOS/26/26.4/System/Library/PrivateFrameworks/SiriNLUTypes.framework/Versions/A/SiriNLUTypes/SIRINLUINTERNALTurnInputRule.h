@class SIRINLUINTERNALUtteranceRule, NSMutableArray;

@interface SIRINLUINTERNALTurnInputRule : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUtteranceRule;
@property (retain, nonatomic) SIRINLUINTERNALUtteranceRule *utteranceRule;
@property (retain, nonatomic) NSMutableArray *positiveContextRules;
@property (retain, nonatomic) NSMutableArray *negativeContextRules;

+ (Class)negativeContextRulesType;
+ (Class)positiveContextRulesType;

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
- (void)addNegativeContextRules:(id)a0;
- (void)addPositiveContextRules:(id)a0;
- (void)clearNegativeContextRules;
- (void)clearPositiveContextRules;
- (id)negativeContextRulesAtIndex:(unsigned long long)a0;
- (unsigned long long)negativeContextRulesCount;
- (id)positiveContextRulesAtIndex:(unsigned long long)a0;
- (unsigned long long)positiveContextRulesCount;

@end
