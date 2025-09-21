@class NSData, ODDSiriSchemaODDTimeInterval;

@interface ODDSiriSchemaODDDeviceCohort : SISchemaInstrumentationMessage {
    struct { unsigned char cohortType : 1; unsigned char cohortDataAvailabilityState : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDTimeInterval *cohortInterval;
@property (nonatomic) char hasCohortInterval;
@property (nonatomic) int cohortType;
@property (nonatomic) char hasCohortType;
@property (nonatomic) int cohortDataAvailabilityState;
@property (nonatomic) char hasCohortDataAvailabilityState;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCohortDataAvailabilityState;
- (void)deleteCohortInterval;
- (void)deleteCohortType;
- (id)suppressMessageUnderConditions;

@end
