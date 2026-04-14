@class SIRINLUINTERNALUtteranceRule, NSMutableArray;

@interface SIRINLUINTERNALTurnInputRule : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUtteranceRule;
@property (retain, nonatomic) SIRINLUINTERNALUtteranceRule *utteranceRule;
@property (retain, nonatomic) NSMutableArray *positiveContextRules;
@property (retain, nonatomic) NSMutableArray *negativeContextRules;

+ (Class)positiveContextRulesType;
+ (Class)negativeContextRulesType;

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
- (void)clearPositiveContextRules;
- (void)addPositiveContextRules:(id)a0;
- (unsigned long long)positiveContextRulesCount;
- (id)positiveContextRulesAtIndex:(unsigned long long)a0;
- (void)clearNegativeContextRules;
- (void)addNegativeContextRules:(id)a0;
- (unsigned long long)negativeContextRulesCount;
- (id)negativeContextRulesAtIndex:(unsigned long long)a0;

@end
