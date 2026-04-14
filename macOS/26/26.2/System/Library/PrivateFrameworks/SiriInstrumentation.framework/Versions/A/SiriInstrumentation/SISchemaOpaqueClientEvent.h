@class NSData, SISchemaComponentIdentifier;

@interface SISchemaOpaqueClientEvent : SISchemaTopLevelUnionType

@property (nonatomic, readonly) int componentName;
@property (copy, nonatomic) NSData *anyEventPayload;
@property (nonatomic) BOOL hasAnyEventPayload;
@property (retain, nonatomic) SISchemaComponentIdentifier *componentId;
@property (nonatomic) BOOL hasComponentId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteAnyEventPayload;
- (void)deleteComponentId;
- (id)getComponentId;

@end
