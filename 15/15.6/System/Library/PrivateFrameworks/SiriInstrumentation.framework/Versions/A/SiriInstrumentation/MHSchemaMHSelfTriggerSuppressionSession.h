@class NSData;

@interface MHSchemaMHSelfTriggerSuppressionSession : SISchemaInstrumentationMessage {
    struct { unsigned char numSelfTriggersDetectedInSession : 1; unsigned char sessionDurationInSeconds : 1; unsigned char audioSource : 1; unsigned char isBluetoothSpeakerActive : 1; unsigned char isBuiltInSpeakerActive : 1; } _has;
}

@property (nonatomic) unsigned int numSelfTriggersDetectedInSession;
@property (nonatomic) char hasNumSelfTriggersDetectedInSession;
@property (nonatomic) double sessionDurationInSeconds;
@property (nonatomic) char hasSessionDurationInSeconds;
@property (nonatomic) int audioSource;
@property (nonatomic) char hasAudioSource;
@property (nonatomic) char isBluetoothSpeakerActive;
@property (nonatomic) char hasIsBluetoothSpeakerActive;
@property (nonatomic) char isBuiltInSpeakerActive;
@property (nonatomic) char hasIsBuiltInSpeakerActive;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAudioSource;
- (void)deleteIsBluetoothSpeakerActive;
- (void)deleteIsBuiltInSpeakerActive;
- (void)deleteNumSelfTriggersDetectedInSession;
- (void)deleteSessionDurationInSeconds;
- (id)suppressMessageUnderConditions;

@end
