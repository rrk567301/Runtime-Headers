@class SISchemaInstrumentationMessage, SUGSchemaSUGEngagementReported, SUGSchemaSUGClientEventMetadata, NSData, SUGSchemaSUGSuggestionsGenerated;

@interface SUGSchemaSUGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SUGSchemaSUGClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SUGSchemaSUGSuggestionsGenerated *suggestionsGenerated;
@property (nonatomic) BOOL hasSuggestionsGenerated;
@property (retain, nonatomic) SUGSchemaSUGEngagementReported *engagementReported;
@property (nonatomic) BOOL hasEngagementReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

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
- (int)getAnyEventType;
- (int)clockIsolationLevel;
- (void)deleteEngagementReported;
- (void)deleteEventMetadata;
- (void)deleteSuggestionsGenerated;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;

@end
