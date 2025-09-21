@class NSData, SISchemaUUID;

@interface MHSchemaMHSpeechDetectorEnded : SISchemaInstrumentationMessage {
    struct { unsigned char timeSinceLastAcceptedRequestInNs : 1; unsigned char amountOfSpeechDetectedInMs : 1; unsigned char startSpeechDetectionThresholdInMs : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *previousRequestId;
@property (nonatomic) char hasPreviousRequestId;
@property (nonatomic) unsigned long long timeSinceLastAcceptedRequestInNs;
@property (nonatomic) char hasTimeSinceLastAcceptedRequestInNs;
@property (nonatomic) float amountOfSpeechDetectedInMs;
@property (nonatomic) char hasAmountOfSpeechDetectedInMs;
@property (nonatomic) float startSpeechDetectionThresholdInMs;
@property (nonatomic) char hasStartSpeechDetectionThresholdInMs;
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
- (void)deleteAmountOfSpeechDetectedInMs;
- (void)deletePreviousRequestId;
- (void)deleteStartSpeechDetectionThresholdInMs;
- (void)deleteTimeSinceLastAcceptedRequestInNs;
- (id)suppressMessageUnderConditions;

@end
