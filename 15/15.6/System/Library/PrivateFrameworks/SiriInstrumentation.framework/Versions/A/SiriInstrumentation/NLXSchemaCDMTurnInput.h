@class NSArray, NSData, NLXSchemaCDMTurnContext;

@interface NLXSchemaCDMTurnInput : SISchemaInstrumentationMessage {
    struct { unsigned char isTapToEdit : 1; } _has;
}

@property (copy, nonatomic) NSArray *asrHypothesisIds;
@property (retain, nonatomic) NLXSchemaCDMTurnContext *turnContext;
@property (nonatomic) char hasTurnContext;
@property (nonatomic) char isTapToEdit;
@property (nonatomic) char hasIsTapToEdit;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addAsrHypothesisIds:(id)a0;
- (id)asrHypothesisIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)asrHypothesisIdsCount;
- (void)clearAsrHypothesisIds;
- (void)deleteAsrHypothesisIds;
- (void)deleteIsTapToEdit;
- (void)deleteTurnContext;
- (id)suppressMessageUnderConditions;

@end
