@class NSArray, PEGASUSSchemaPEGASUSMultiTurnListSelectionUnderstandingTier1, SISchemaUUID, NSData;

@interface PEGASUSSchemaPEGASUSUtteranceUnderstandingReportedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *topU2Intents;
@property (copy, nonatomic) NSArray *topKGSAIntents;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSMultiTurnListSelectionUnderstandingTier1 *multiTurnListSelectionUnderstanding;
@property (nonatomic) BOOL hasMultiTurnListSelectionUnderstanding;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addTopKGSAIntents:(id)a0;
- (void)addTopU2Intents:(id)a0;
- (void)clearTopKGSAIntents;
- (void)clearTopU2Intents;
- (void)deleteLinkId;
- (void)deleteMultiTurnListSelectionUnderstanding;
- (void)deleteTopKGSAIntents;
- (void)deleteTopU2Intents;
- (id)topKGSAIntentsAtIndex:(unsigned long long)a0;
- (unsigned long long)topKGSAIntentsCount;
- (id)topU2IntentsAtIndex:(unsigned long long)a0;
- (unsigned long long)topU2IntentsCount;

@end
