@class ODDSiriSchemaODDAssistantVoicesTuples, NSData, ODDSiriSchemaODDAssistantVoicesDimensions, ODDSiriSchemaODDAssistantVoicesCounts;

@interface ODDSiriSchemaODDAssistantVoicesDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDAssistantVoicesDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantVoicesCounts *counts;
@property (nonatomic) BOOL hasCounts;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantVoicesTuples *tuples;
@property (nonatomic) BOOL hasTuples;
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
- (void)deleteCounts;
- (void)deleteDimensions;
- (void)deleteTuples;

@end
