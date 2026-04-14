@class NSData, SISchemaComponentIdentifier;

@interface SISchemaOpaqueClientEvent : SISchemaTopLevelUnionType

@property (nonatomic, readonly) int componentName;
@property (copy, nonatomic) NSData *anyEventPayload;
@property (nonatomic) BOOL hasAnyEventPayload;
@property (retain, nonatomic) SISchemaComponentIdentifier *componentId;
@property (nonatomic) BOOL hasComponentId;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteAnyEventPayload;
- (void)deleteComponentId;
- (id)getComponentId;

@end
