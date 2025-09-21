@class NSData;

@interface CNVSchemaCNVExecutionOverridesEvaluated : SISchemaInstrumentationMessage {
    struct { unsigned char executionOverrideDecision : 1; } _has;
}

@property (nonatomic) int executionOverrideDecision;
@property (nonatomic) char hasExecutionOverrideDecision;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExecutionOverrideDecision;
- (id)suppressMessageUnderConditions;

@end
