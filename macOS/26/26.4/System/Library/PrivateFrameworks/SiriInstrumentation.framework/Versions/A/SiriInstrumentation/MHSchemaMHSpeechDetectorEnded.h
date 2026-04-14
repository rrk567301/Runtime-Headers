@class NSData, SISchemaUUID;

@interface MHSchemaMHSpeechDetectorEnded : SISchemaInstrumentationMessage {
    struct { unsigned char timeSinceLastAcceptedRequestInNs : 1; unsigned char amountOfSpeechDetectedInMs : 1; unsigned char startSpeechDetectionThresholdInMs : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *previousRequestId;
@property (nonatomic) BOOL hasPreviousRequestId;
@property (nonatomic) unsigned long long timeSinceLastAcceptedRequestInNs;
@property (nonatomic) BOOL hasTimeSinceLastAcceptedRequestInNs;
@property (nonatomic) float amountOfSpeechDetectedInMs;
@property (nonatomic) BOOL hasAmountOfSpeechDetectedInMs;
@property (nonatomic) float startSpeechDetectionThresholdInMs;
@property (nonatomic) BOOL hasStartSpeechDetectionThresholdInMs;
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
- (void)deleteAmountOfSpeechDetectedInMs;
- (void)deletePreviousRequestId;
- (void)deleteStartSpeechDetectionThresholdInMs;
- (void)deleteTimeSinceLastAcceptedRequestInNs;

@end
