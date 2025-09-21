@class SISchemaInstrumentationMessage, NSData, DialogEngineSchemaDLGENGClientEventMetadata, DialogEngineSchemaDLGENGNamedEntitiesUsed;

@interface DialogEngineSchemaDLGENGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) DialogEngineSchemaDLGENGClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) DialogEngineSchemaDLGENGNamedEntitiesUsed *DLGENGNamedEntitiesUsed;
@property (nonatomic) BOOL hasDLGENGNamedEntitiesUsed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteDLGENGNamedEntitiesUsed;
- (void)deleteEventMetadata;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
