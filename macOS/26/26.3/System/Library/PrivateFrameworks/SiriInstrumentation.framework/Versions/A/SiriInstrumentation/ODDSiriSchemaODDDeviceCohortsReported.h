@class NSArray, NSData;

@interface ODDSiriSchemaODDDeviceCohortsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *cohorts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addCohorts:(id)a0;
- (id)cohortsAtIndex:(unsigned long long)a0;
- (void)clearCohorts;
- (unsigned long long)cohortsCount;
- (void)deleteCohorts;

@end
