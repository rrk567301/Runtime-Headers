@class SISchemaUUID, NSData, NSArray, FLOWSchemaFLOWWebAnswerExecution, PEGASUSSchemaPEGASUSIntent, FLOWSchemaFLOWKGQAExecution, FLOWSchemaFLOWMapsExecution, FLOWSchemaFLOWSPORTSExecution, FLOWSchemaFLOWCrossIntentRankerResponse;

@interface FLOWSchemaFLOWPegasusContext : SISchemaInstrumentationMessage {
    struct { unsigned char productArea : 1; unsigned char primaryProvider : 1; unsigned char isHandOffExecution : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (nonatomic) int productArea;
@property (nonatomic) char hasProductArea;
@property (nonatomic) int primaryProvider;
@property (nonatomic) char hasPrimaryProvider;
@property (copy, nonatomic) NSArray *otherProviders;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSIntent *intent;
@property (nonatomic) char hasIntent;
@property (nonatomic) char isHandOffExecution;
@property (nonatomic) char hasIsHandOffExecution;
@property (retain, nonatomic) FLOWSchemaFLOWKGQAExecution *kgQAExecution;
@property (nonatomic) char hasKgQAExecution;
@property (retain, nonatomic) FLOWSchemaFLOWWebAnswerExecution *webAnswerExecution;
@property (nonatomic) char hasWebAnswerExecution;
@property (retain, nonatomic) FLOWSchemaFLOWSPORTSExecution *sportsExecution;
@property (nonatomic) char hasSportsExecution;
@property (retain, nonatomic) FLOWSchemaFLOWCrossIntentRankerResponse *crossIntentRankerResponse;
@property (nonatomic) char hasCrossIntentRankerResponse;
@property (retain, nonatomic) FLOWSchemaFLOWMapsExecution *mapsExecution;
@property (nonatomic) char hasMapsExecution;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCrossIntentRankerResponse;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addOtherProviders:(int)a0;
- (void)clearOtherProviders;
- (void)deleteIntent;
- (void)deleteIsHandOffExecution;
- (void)deleteKgQAExecution;
- (void)deleteLinkId;
- (void)deleteMapsExecution;
- (void)deleteOtherProviders;
- (void)deletePrimaryProvider;
- (void)deleteProductArea;
- (void)deleteSportsExecution;
- (void)deleteWebAnswerExecution;
- (int)otherProvidersAtIndex:(unsigned long long)a0;
- (unsigned long long)otherProvidersCount;
- (id)suppressMessageUnderConditions;

@end
