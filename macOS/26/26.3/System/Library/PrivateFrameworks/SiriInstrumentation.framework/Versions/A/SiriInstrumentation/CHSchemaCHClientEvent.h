@class SISchemaInstrumentationMessage, CHSchemaCHConversationQualityInferenceGenerated, CHSchemaCHClientEventMetadata, NSData, CHSchemaCHUserAlignmentInferenceGenerated;

@interface CHSchemaCHClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CHSchemaCHClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CHSchemaCHUserAlignmentInferenceGenerated *userAlignmentInferenceGenerated;
@property (nonatomic) BOOL hasUserAlignmentInferenceGenerated;
@property (retain, nonatomic) CHSchemaCHConversationQualityInferenceGenerated *conversationQualityInferenceGenerated;
@property (nonatomic) BOOL hasConversationQualityInferenceGenerated;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (id)qualifiedMessageName;
- (int)getAnyEventType;
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
- (int)clockIsolationLevel;
- (void)deleteConversationQualityInferenceGenerated;
- (void)deleteEventMetadata;
- (void)deleteUserAlignmentInferenceGenerated;
- (unsigned long long)whichInnerEventType;

@end
