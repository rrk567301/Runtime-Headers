@class SISchemaInstrumentationMessage, PSESchemaPSECallSignalGenerated, PSESchemaPSEMessageSignalGenerated, NSData, PSESchemaPSEGenericSignalGenerated, PSESchemaPSEClientEventMetadata;

@interface PSESchemaPSEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) PSESchemaPSEClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) PSESchemaPSEGenericSignalGenerated *genericSignalGenerated;
@property (nonatomic) BOOL hasGenericSignalGenerated;
@property (retain, nonatomic) PSESchemaPSECallSignalGenerated *callSignalGenerated;
@property (nonatomic) BOOL hasCallSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEMessageSignalGenerated *messageSignalGenerated;
@property (nonatomic) BOOL hasMessageSignalGenerated;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (id)getComponentId;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)clockIsolationLevel;
- (void)deleteEventMetadata;
- (void)deleteGenericSignalGenerated;
- (void)deleteCallSignalGenerated;
- (void)deleteMessageSignalGenerated;

@end
