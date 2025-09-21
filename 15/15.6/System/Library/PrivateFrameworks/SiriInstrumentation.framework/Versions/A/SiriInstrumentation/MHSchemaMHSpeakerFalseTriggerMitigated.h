@class NSString, NSData;

@interface MHSchemaMHSpeakerFalseTriggerMitigated : SISchemaInstrumentationMessage {
    struct { unsigned char speakerMatchScore : 1; unsigned char thresholdScore : 1; unsigned char processedAudioDurationInNs : 1; unsigned char errorCode : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) char hasModelVersion;
@property (nonatomic) float speakerMatchScore;
@property (nonatomic) char hasSpeakerMatchScore;
@property (nonatomic) float thresholdScore;
@property (nonatomic) char hasThresholdScore;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) char hasErrorMessage;
@property (nonatomic) double processedAudioDurationInNs;
@property (nonatomic) char hasProcessedAudioDurationInNs;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) char hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (void)deleteErrorMessage;
- (void)deleteModelVersion;
- (void)deleteProcessedAudioDurationInNs;
- (void)deleteSpeakerMatchScore;
- (void)deleteThresholdScore;
- (id)suppressMessageUnderConditions;

@end
