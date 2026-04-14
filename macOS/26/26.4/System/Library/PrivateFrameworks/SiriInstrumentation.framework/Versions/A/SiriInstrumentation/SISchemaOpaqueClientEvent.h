@class NSData, SISchemaComponentIdentifier;

@interface SISchemaOpaqueClientEvent : SISchemaTopLevelUnionType

@property (nonatomic, readonly) int componentName;
@property (copy, nonatomic) NSData *anyEventPayload;
@property (nonatomic) BOOL hasAnyEventPayload;
@property (retain, nonatomic) SISchemaComponentIdentifier *componentId;
@property (nonatomic) BOOL hasComponentId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAnyEventPayload;
- (void)deleteComponentId;
- (id)getComponentId;

@end
