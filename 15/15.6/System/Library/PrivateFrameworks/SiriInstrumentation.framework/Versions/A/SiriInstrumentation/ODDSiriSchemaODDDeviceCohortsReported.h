@class NSArray, NSData;

@interface ODDSiriSchemaODDDeviceCohortsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *cohorts;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addCohorts:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)cohortsAtIndex:(unsigned long long)a0;
- (void)clearCohorts;
- (unsigned long long)cohortsCount;
- (void)deleteCohorts;
- (id)suppressMessageUnderConditions;

@end
