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

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteEventType;
- (void)deleteAvailabilityStatus;
- (void)deleteFixedDimensions;

@end
