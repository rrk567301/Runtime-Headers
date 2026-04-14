@class NSArray, NSData, NLXSchemaCDMTurnContext;

@interface NLXSchemaCDMTurnInput : SISchemaInstrumentationMessage {
    struct { unsigned char isTapToEdit : 1; } _has;
}

@property (copy, nonatomic) NSArray *asrHypothesisIds;
@property (retain, nonatomic) NLXSchemaCDMTurnContext *turnContext;
@property (nonatomic) BOOL hasTurnContext;
@property (nonatomic) BOOL isTapToEdit;
@property (nonatomic) BOOL hasIsTapToEdit;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addAsrHypothesisIds:(id)a0;
- (id)asrHypothesisIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)asrHypothesisIdsCount;
- (void)clearAsrHypothesisIds;
- (void)deleteAsrHypothesisIds;
- (void)deleteIsTapToEdit;
- (void)deleteTurnContext;

@end
