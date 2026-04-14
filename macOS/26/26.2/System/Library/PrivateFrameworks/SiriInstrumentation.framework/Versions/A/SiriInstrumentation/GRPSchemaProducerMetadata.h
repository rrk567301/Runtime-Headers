@class GRPSchemaTrialExperimentIdentifiers, NSData;

@interface GRPSchemaProducerMetadata : SISchemaTopLevelUnionType

@property (retain, nonatomic) GRPSchemaTrialExperimentIdentifiers *trialExperiment;
@property (nonatomic) BOOL hasTrialExperiment;
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
- (void)deleteTrialExperiment;

@end
