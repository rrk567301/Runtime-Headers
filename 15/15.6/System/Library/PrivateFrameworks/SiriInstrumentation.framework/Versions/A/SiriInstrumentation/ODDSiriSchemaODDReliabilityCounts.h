@class NSData;

@interface ODDSiriSchemaODDReliabilityCounts : SISchemaInstrumentationMessage {
    struct { unsigned char reliabilityRequestCount : 1; unsigned char reliabilityTurnCount : 1; unsigned char clientErrorCount : 1; unsigned char undesiredResponseCount : 1; unsigned char fatalResponseCount : 1; unsigned char failureResponseCount : 1; unsigned char siriUnavailableResponseCount : 1; } _has;
}

@property (nonatomic) unsigned int reliabilityRequestCount;
@property (nonatomic) char hasReliabilityRequestCount;
@property (nonatomic) unsigned int reliabilityTurnCount;
@property (nonatomic) char hasReliabilityTurnCount;
@property (nonatomic) unsigned int clientErrorCount;
@property (nonatomic) char hasClientErrorCount;
@property (nonatomic) unsigned int undesiredResponseCount;
@property (nonatomic) char hasUndesiredResponseCount;
@property (nonatomic) unsigned int fatalResponseCount;
@property (nonatomic) char hasFatalResponseCount;
@property (nonatomic) unsigned int failureResponseCount;
@property (nonatomic) char hasFailureResponseCount;
@property (nonatomic) unsigned int siriUnavailableResponseCount;
@property (nonatomic) char hasSiriUnavailableResponseCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteClientErrorCount;
- (void)deleteFailureResponseCount;
- (void)deleteFatalResponseCount;
- (void)deleteReliabilityRequestCount;
- (void)deleteReliabilityTurnCount;
- (void)deleteSiriUnavailableResponseCount;
- (void)deleteUndesiredResponseCount;
- (id)suppressMessageUnderConditions;

@end
