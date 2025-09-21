@class NSData, SISchemaComponentIdentifier;

@interface SISchemaOpaqueClientEvent : SISchemaTopLevelUnionType

@property (nonatomic, readonly) int componentName;
@property (copy, nonatomic) NSData *anyEventPayload;
@property (nonatomic) char hasAnyEventPayload;
@property (retain, nonatomic) SISchemaComponentIdentifier *componentId;
@property (nonatomic) char hasComponentId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteAnyEventPayload;
- (void)deleteComponentId;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;

@end
