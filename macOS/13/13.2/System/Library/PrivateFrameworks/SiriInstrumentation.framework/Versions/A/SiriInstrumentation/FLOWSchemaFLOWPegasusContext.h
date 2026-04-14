@class SISchemaUUID, NSData, NSArray, FLOWSchemaFLOWWebAnswerExecution, PEGASUSSchemaPEGASUSIntent, FLOWSchemaFLOWKGQAExecution, FLOWSchemaFLOWMapsExecution, FLOWSchemaFLOWSPORTSExecution, FLOWSchemaFLOWCrossIntentRankerResponse;

@interface FLOWSchemaFLOWPegasusContext : SISchemaInstrumentationMessage {
    struct { unsigned char productArea : 1; unsigned char primaryProvider : 1; unsigned char isHandOffExecution : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) int productArea;
@property (nonatomic) BOOL hasProductArea;
@property (nonatomic) int primaryProvider;
@property (nonatomic) BOOL hasPrimaryProvider;
@property (copy, nonatomic) NSArray *otherProviders;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSIntent *intent;
@property (nonatomic) BOOL hasIntent;
@property (nonatomic) BOOL isHandOffExecution;
@property (nonatomic) BOOL hasIsHandOffExecution;
@property (retain, nonatomic) FLOWSchemaFLOWKGQAExecution *kgQAExecution;
@property (nonatomic) BOOL hasKgQAExecution;
@property (retain, nonatomic) FLOWSchemaFLOWWebAnswerExecution *webAnswerExecution;
@property (nonatomic) BOOL hasWebAnswerExecution;
@property (retain, nonatomic) FLOWSchemaFLOWSPORTSExecution *sportsExecution;
@property (nonatomic) BOOL hasSportsExecution;
@property (retain, nonatomic) FLOWSchemaFLOWCrossIntentRankerResponse *crossIntentRankerResponse;
@property (nonatomic) BOOL hasCrossIntentRankerResponse;
@property (retain, nonatomic) FLOWSchemaFLOWMapsExecution *mapsExecution;
@property (nonatomic) BOOL hasMapsExecution;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLinkId;
- (void)deleteProductArea;
- (void)deletePrimaryProvider;
- (void)clearOtherProviders;
- (void)deleteOtherProviders;
- (void)addOtherProviders:(int)a0;
- (unsigned long long)otherProvidersCount;
- (int)otherProvidersAtIndex:(unsigned long long)a0;
- (void)deleteIntent;
- (void)deleteIsHandOffExecution;
- (void)deleteKgQAExecution;
- (void)deleteWebAnswerExecution;
- (void)deleteSportsExecution;
- (void)deleteCrossIntentRankerResponse;
- (void)deleteMapsExecution;

@end
