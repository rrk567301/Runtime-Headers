@class NSData, SISchemaComponentIdentifier;

@interface SISchemaOpaqueClientEvent : SISchemaTopLevelUnionType

@property (nonatomic, readonly) int componentName;
@property (copy, nonatomic) NSData *anyEventPayload;
@property (nonatomic) BOOL hasAnyEventPayload;
@property (retain, nonatomic) SISchemaComponentIdentifier *componentId;
@property (nonatomic) BOOL hasComponentId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteAnyEventPayload;
- (void)deleteComponentId;
- (id)getComponentId;

@end
