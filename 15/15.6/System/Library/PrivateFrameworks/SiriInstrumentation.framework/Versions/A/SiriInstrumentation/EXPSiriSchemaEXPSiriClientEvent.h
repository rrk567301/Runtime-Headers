@class SISchemaInstrumentationMessage, EXPSiriSchemaEXPClientExperimentTriggeredTier1, EXPSiriSchemaEXPAllocationChangelogSnapshot, EXPSiriSchemaEXPClientSiriRequestExperimentTriggeredTier1, EXPSiriSchemaEXPRolloutChangeSnapshot, EXPSiriSchemaEXPAllocationSnapshot, NSData;

@interface EXPSiriSchemaEXPSiriClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) EXPSiriSchemaEXPAllocationSnapshot *allocationSnapshot;
@property (nonatomic) char hasAllocationSnapshot;
@property (retain, nonatomic) EXPSiriSchemaEXPAllocationChangelogSnapshot *allocationChangelogSnapshot;
@property (nonatomic) char hasAllocationChangelogSnapshot;
@property (retain, nonatomic) EXPSiriSchemaEXPClientExperimentTriggeredTier1 *experimentTriggered;
@property (nonatomic) char hasExperimentTriggered;
@property (retain, nonatomic) EXPSiriSchemaEXPClientSiriRequestExperimentTriggeredTier1 *SiriRequestExperimentTriggered;
@property (nonatomic) char hasSiriRequestExperimentTriggered;
@property (retain, nonatomic) EXPSiriSchemaEXPRolloutChangeSnapshot *rolloutChangeSnapshot;
@property (nonatomic) char hasRolloutChangeSnapshot;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

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
- (void)deleteAllocationChangelogSnapshot;
- (void)deleteAllocationSnapshot;
- (void)deleteExperimentTriggered;
- (void)deleteRolloutChangeSnapshot;
- (void)deleteSiriRequestExperimentTriggered;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
