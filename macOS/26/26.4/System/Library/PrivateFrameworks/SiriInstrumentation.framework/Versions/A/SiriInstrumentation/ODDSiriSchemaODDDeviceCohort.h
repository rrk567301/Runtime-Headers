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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCohortDataAvailabilityState;
- (void)deleteCohortInterval;
- (void)deleteCohortType;

@end
