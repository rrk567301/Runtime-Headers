@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODDimension, SISchemaUUID, PNRODSchemaPNRODFailureInfo;

@interface PNRODSchemaPnRODSiriMetricsAndDims : SISchemaInstrumentationMessage {
    struct { unsigned char componentIndex : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *turnId;
@property (nonatomic) BOOL hasTurnId;
@property (retain, nonatomic) SISchemaUUID *componentInvocationId;
@property (nonatomic) BOOL hasComponentInvocationId;
@property (nonatomic) long long componentIndex;
@property (nonatomic) BOOL hasComponentIndex;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *metricDuration;
@property (nonatomic) BOOL hasMetricDuration;
@property (retain, nonatomic) PNRODSchemaPNRODDimension *dimensionValue;
@property (nonatomic) BOOL hasDimensionValue;
@property (retain, nonatomic) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) BOOL hasFailureInfo;
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
- (void)deleteComponentIndex;
- (void)deleteComponentInvocationId;
- (void)deleteDimensionValue;
- (void)deleteFailureInfo;
- (void)deleteMetricDuration;
- (void)deleteTurnId;

@end
