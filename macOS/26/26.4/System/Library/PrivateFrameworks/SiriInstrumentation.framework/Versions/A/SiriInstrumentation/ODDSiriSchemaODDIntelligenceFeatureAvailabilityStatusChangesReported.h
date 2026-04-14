@class NSData, ODDSiriSchemaODDIntelligenceFeatureReportingAvailabilityStatus, ODDSiriSchemaODDFixedDimensions;

@interface ODDSiriSchemaODDIntelligenceFeatureAvailabilityStatusChangesReported : SISchemaInstrumentationMessage {
    struct { unsigned char eventType : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDFixedDimensions *fixedDimensions;
@property (nonatomic) BOOL hasFixedDimensions;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasEventType;
@property (retain, nonatomic) ODDSiriSchemaODDIntelligenceFeatureReportingAvailabilityStatus *availabilityStatus;
@property (nonatomic) BOOL hasAvailabilityStatus;
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
- (void)deleteEventType;
- (void)deleteAvailabilityStatus;
- (void)deleteFixedDimensions;

@end
