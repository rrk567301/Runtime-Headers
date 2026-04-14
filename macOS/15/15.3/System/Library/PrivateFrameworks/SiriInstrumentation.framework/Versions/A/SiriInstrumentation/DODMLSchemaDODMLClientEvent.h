@class SISchemaInstrumentationMessage, DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1, DODMLSchemaDODMLClientEventMetadata, DODMLASRSchemaDODMLASRUserEditExperimentContext, DODMLASRSchemaDODMLASRAudioFileResultTier1, NSData, DODMLASRSchemaDODMLASRPersonalizationExperimentContext;

@interface DODMLSchemaDODMLClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) DODMLSchemaDODMLClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRPersonalizationExperimentContext *personalizationExperimentContext;
@property (nonatomic) BOOL hasPersonalizationExperimentContext;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentContext *userEditExperimentContext;
@property (nonatomic) BOOL hasUserEditExperimentContext;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1 *userEditExperimentEndedTier1;
@property (nonatomic) BOOL hasUserEditExperimentEndedTier1;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRAudioFileResultTier1 *audioFileResultTier1;
@property (nonatomic) BOOL hasAudioFileResultTier1;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteUserEditExperimentContext;
- (int)getAnyEventType;
- (void)deleteAudioFileResultTier1;
- (void)deleteEventMetadata;
- (void)deletePersonalizationExperimentContext;
- (void)deleteUserEditExperimentEndedTier1;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
