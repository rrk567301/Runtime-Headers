@class SISchemaInstrumentationMessage, EXPSiriSchemaEXPServerCounterfactualTriggered, NSData, EXPSiriSchemaEXPServerExperimentTriggeredTier1, EXPSiriSchemaEXPServerCounterfactualTriggeredTier1;

@interface EXPSiriSchemaEXPSiriServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) EXPSiriSchemaEXPServerExperimentTriggeredTier1 *experimentTriggered;
@property (nonatomic) BOOL hasExperimentTriggered;
@property (retain, nonatomic) EXPSiriSchemaEXPServerCounterfactualTriggeredTier1 *counterfactualTriggered;
@property (nonatomic) BOOL hasCounterfactualTriggered;
@property (retain, nonatomic) EXPSiriSchemaEXPServerCounterfactualTriggered *counterfactualTriggeredNonTier1;
@property (nonatomic) BOOL hasCounterfactualTriggeredNonTier1;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

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
- (void)deleteCounterfactualTriggered;
- (void)deleteCounterfactualTriggeredNonTier1;
- (void)deleteExperimentTriggered;
- (unsigned long long)whichInnerEventType;

@end
