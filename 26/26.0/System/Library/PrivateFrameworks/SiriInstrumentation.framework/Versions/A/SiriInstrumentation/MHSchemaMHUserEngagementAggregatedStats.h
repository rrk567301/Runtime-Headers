@class NSString, NSData;

@interface MHSchemaMHUserEngagementAggregatedStats : SISchemaInstrumentationMessage {
    struct { unsigned char mitigationType : 1; unsigned char requestCount : 1; unsigned char intendedRequestCount : 1; unsigned char unintendedRequestCount : 1; unsigned char intendedRequestRatio : 1; unsigned char triggeredMechanismRequestRatio : 1; } _has;
}

@property (nonatomic) int mitigationType;
@property (nonatomic) BOOL hasMitigationType;
@property (nonatomic) int requestCount;
@property (nonatomic) BOOL hasRequestCount;
@property (nonatomic) int intendedRequestCount;
@property (nonatomic) BOOL hasIntendedRequestCount;
@property (nonatomic) int unintendedRequestCount;
@property (nonatomic) BOOL hasUnintendedRequestCount;
@property (nonatomic) double intendedRequestRatio;
@property (nonatomic) BOOL hasIntendedRequestRatio;
@property (nonatomic) double triggeredMechanismRequestRatio;
@property (nonatomic) BOOL hasTriggeredMechanismRequestRatio;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteIntendedRequestCount;
- (void)deleteIntendedRequestRatio;
- (void)deleteMitigationType;
- (void)deleteModelVersion;
- (void)deleteRequestCount;
- (void)deleteTriggeredMechanismRequestRatio;
- (void)deleteUnintendedRequestCount;

@end
