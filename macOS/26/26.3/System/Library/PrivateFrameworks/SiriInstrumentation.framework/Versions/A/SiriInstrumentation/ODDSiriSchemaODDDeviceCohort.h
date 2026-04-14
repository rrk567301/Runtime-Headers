@class NSData, ODDSiriSchemaODDTimeInterval;

@interface ODDSiriSchemaODDDeviceCohort : SISchemaInstrumentationMessage {
    struct { unsigned char cohortType : 1; unsigned char cohortDataAvailabilityState : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDTimeInterval *cohortInterval;
@property (nonatomic) BOOL hasCohortInterval;
@property (nonatomic) int cohortType;
@property (nonatomic) BOOL hasCohortType;
@property (nonatomic) int cohortDataAvailabilityState;
@property (nonatomic) BOOL hasCohortDataAvailabilityState;
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
- (void)deleteCohortDataAvailabilityState;
- (void)deleteCohortInterval;
- (void)deleteCohortType;

@end
