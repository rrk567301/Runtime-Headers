@class CMSchemaCMSearchContext, SISchemaInstrumentationMessage, NSData, CMSchemaCMClientEventMetadata, CMSchemaCMInsertContext;

@interface CMSchemaCMClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CMSchemaCMClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CMSchemaCMSearchContext *searchContext;
@property (nonatomic) BOOL hasSearchContext;
@property (retain, nonatomic) CMSchemaCMInsertContext *insertContext;
@property (nonatomic) BOOL hasInsertContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)componentName;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEventMetadata;
- (void)deleteInsertContext;
- (void)deleteSearchContext;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
