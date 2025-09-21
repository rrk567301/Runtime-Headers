@class NSData;

@interface NLXSchemaMARRSRepetitionDetectionEvaluated : SISchemaInstrumentationMessage {
    struct { unsigned char repetitionType : 1; unsigned char ruleType : 1; unsigned char noRepetitionConfidence : 1; unsigned char fullRepetitionConfidence : 1; unsigned char partialRepetitionConfidence : 1; } _has;
}

@property (nonatomic) int repetitionType;
@property (nonatomic) char hasRepetitionType;
@property (nonatomic) int ruleType;
@property (nonatomic) char hasRuleType;
@property (nonatomic) float noRepetitionConfidence;
@property (nonatomic) char hasNoRepetitionConfidence;
@property (nonatomic) float fullRepetitionConfidence;
@property (nonatomic) char hasFullRepetitionConfidence;
@property (nonatomic) float partialRepetitionConfidence;
@property (nonatomic) char hasPartialRepetitionConfidence;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFullRepetitionConfidence;
- (void)deleteNoRepetitionConfidence;
- (void)deletePartialRepetitionConfidence;
- (void)deleteRepetitionType;
- (void)deleteRuleType;
- (id)suppressMessageUnderConditions;

@end
