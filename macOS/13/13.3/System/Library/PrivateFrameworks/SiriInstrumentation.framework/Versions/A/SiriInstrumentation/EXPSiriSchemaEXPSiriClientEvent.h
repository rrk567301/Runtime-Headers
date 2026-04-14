@class SISchemaInstrumentationMessage, EXPSiriSchemaEXPClientExperimentTriggeredTier1, EXPSiriSchemaEXPAllocationChangelogSnapshot, EXPSiriSchemaEXPClientSiriRequestExperimentTriggeredTier1, NSData, EXPSiriSchemaEXPAllocationSnapshot;

@interface EXPSiriSchemaEXPSiriClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) EXPSiriSchemaEXPAllocationSnapshot *allocationSnapshot;
@property (nonatomic) BOOL hasAllocationSnapshot;
@property (retain, nonatomic) EXPSiriSchemaEXPAllocationChangelogSnapshot *allocationChangelogSnapshot;
@property (nonatomic) BOOL hasAllocationChangelogSnapshot;
@property (retain, nonatomic) EXPSiriSchemaEXPClientExperimentTriggeredTier1 *experimentTriggered;
@property (nonatomic) BOOL hasExperimentTriggered;
@property (retain, nonatomic) EXPSiriSchemaEXPClientSiriRequestExperimentTriggeredTier1 *SiriRequestExperimentTriggered;
@property (nonatomic) BOOL hasSiriRequestExperimentTriggered;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAllocationChangelogSnapshot;
- (void)deleteAllocationSnapshot;
- (void)deleteExperimentTriggered;
- (void)deleteSiriRequestExperimentTriggered;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;

@end
