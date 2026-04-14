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
- (void)deleteCounterfactualTriggered;
- (void)deleteCounterfactualTriggeredNonTier1;
- (void)deleteExperimentTriggered;
- (unsigned long long)whichInnerEventType;

@end
