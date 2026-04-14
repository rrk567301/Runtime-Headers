@class SIRINLUEXTERNALTurnContext, NSMutableArray;

@interface SIRINLUINTERNALContextRule : PBCodable <NSCopying> {
    struct { unsigned char sdaComparisonMode : 1; unsigned char applyToPromptScenarios : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTurnContext;
@property (retain, nonatomic) SIRINLUEXTERNALTurnContext *turnContext;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (nonatomic) BOOL hasApplyToPromptScenarios;
@property (nonatomic) BOOL applyToPromptScenarios;
@property (nonatomic) BOOL hasSdaComparisonMode;
@property (nonatomic) int sdaComparisonMode;

+ (Class)matchingSpansType;

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
- (void)clearMatchingSpans;
- (void)addMatchingSpans:(id)a0;
- (unsigned long long)matchingSpansCount;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (id)sdaComparisonModeAsString:(int)a0;
- (int)StringAsSdaComparisonMode:(id)a0;

@end
