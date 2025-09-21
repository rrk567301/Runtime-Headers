@class SIRINLUEXTERNALTurnContext, NSMutableArray;

@interface SIRINLUINTERNALContextRule : PBCodable <NSCopying> {
    struct { unsigned char sdaComparisonMode : 1; unsigned char applyToPromptScenarios : 1; } _has;
}

@property (readonly, nonatomic) char hasTurnContext;
@property (retain, nonatomic) SIRINLUEXTERNALTurnContext *turnContext;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (nonatomic) char hasApplyToPromptScenarios;
@property (nonatomic) char applyToPromptScenarios;
@property (nonatomic) char hasSdaComparisonMode;
@property (nonatomic) int sdaComparisonMode;

+ (Class)matchingSpansType;

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
- (void)addMatchingSpans:(id)a0;
- (void)clearMatchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)matchingSpansCount;
- (int)StringAsSdaComparisonMode:(id)a0;
- (id)sdaComparisonModeAsString:(int)a0;

@end
