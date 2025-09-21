@class NSData, PSESchemaPSEMessageSignalGenerated, SISchemaInstrumentationMessage, PSESchemaPSEGenericSignalGenerated, PSESchemaPSEMapsSignalGenerated, PSESchemaPSEHomeFollowupSignalGenerated, PSESchemaPSEMediaSignalGenerated, PSESchemaPSEClientEventMetadata, PSESchemaPSECallSignalGenerated, PSESchemaPSEAlarmSignalGenerated, PSESchemaPSEAppIntentSignalGenerated;

@interface PSESchemaPSEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) PSESchemaPSEClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) PSESchemaPSEGenericSignalGenerated *genericSignalGenerated;
@property (nonatomic) char hasGenericSignalGenerated;
@property (retain, nonatomic) PSESchemaPSECallSignalGenerated *callSignalGenerated;
@property (nonatomic) char hasCallSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEMessageSignalGenerated *messageSignalGenerated;
@property (nonatomic) char hasMessageSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEMediaSignalGenerated *mediaSignalGenerated;
@property (nonatomic) char hasMediaSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEHomeFollowupSignalGenerated *homeFollowupSignalGenerated;
@property (nonatomic) char hasHomeFollowupSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEMapsSignalGenerated *mapsSignalGenerated;
@property (nonatomic) char hasMapsSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEAlarmSignalGenerated *alarmSignalGenerated;
@property (nonatomic) char hasAlarmSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEAppIntentSignalGenerated *appIntentSignalGenerated;
@property (nonatomic) char hasAppIntentSignalGenerated;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (int)clockIsolationLevel;
- (void)deleteAlarmSignalGenerated;
- (void)deleteAppIntentSignalGenerated;
- (void)deleteCallSignalGenerated;
- (void)deleteEventMetadata;
- (void)deleteGenericSignalGenerated;
- (void)deleteHomeFollowupSignalGenerated;
- (void)deleteMapsSignalGenerated;
- (void)deleteMediaSignalGenerated;
- (void)deleteMessageSignalGenerated;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
