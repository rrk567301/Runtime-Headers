@class NSData;

@interface MHSchemaMHRaiseToSpeakSecondPassPolicyDecisionMade : SISchemaInstrumentationMessage {
    struct { unsigned char isSecondPassTriggered : 1; unsigned char speakingProbability : 1; unsigned char processedAudioDurationInMs : 1; unsigned char isReplayModeEnabled : 1; } _has;
}

@property (nonatomic) char isSecondPassTriggered;
@property (nonatomic) char hasIsSecondPassTriggered;
@property (nonatomic) double speakingProbability;
@property (nonatomic) char hasSpeakingProbability;
@property (nonatomic) double processedAudioDurationInMs;
@property (nonatomic) char hasProcessedAudioDurationInMs;
@property (nonatomic) char isReplayModeEnabled;
@property (nonatomic) char hasIsReplayModeEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsReplayModeEnabled;
- (void)deleteIsSecondPassTriggered;
- (void)deleteProcessedAudioDurationInMs;
- (void)deleteSpeakingProbability;
- (id)suppressMessageUnderConditions;

@end
