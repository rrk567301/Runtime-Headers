@class NSString, NSData;

@interface MHSchemaMHUserEngagementAggregatedStats : SISchemaInstrumentationMessage {
    struct { unsigned char mitigationType : 1; unsigned char requestCount : 1; unsigned char intendedRequestCount : 1; unsigned char unintendedRequestCount : 1; unsigned char intendedRequestRatio : 1; unsigned char triggeredMechanismRequestRatio : 1; } _has;
}

@property (nonatomic) int mitigationType;
@property (nonatomic) char hasMitigationType;
@property (nonatomic) int requestCount;
@property (nonatomic) char hasRequestCount;
@property (nonatomic) int intendedRequestCount;
@property (nonatomic) char hasIntendedRequestCount;
@property (nonatomic) int unintendedRequestCount;
@property (nonatomic) char hasUnintendedRequestCount;
@property (nonatomic) double intendedRequestRatio;
@property (nonatomic) char hasIntendedRequestRatio;
@property (nonatomic) double triggeredMechanismRequestRatio;
@property (nonatomic) char hasTriggeredMechanismRequestRatio;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) char hasModelVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIntendedRequestCount;
- (void)deleteIntendedRequestRatio;
- (void)deleteMitigationType;
- (void)deleteModelVersion;
- (void)deleteRequestCount;
- (void)deleteTriggeredMechanismRequestRatio;
- (void)deleteUnintendedRequestCount;
- (id)suppressMessageUnderConditions;

@end
