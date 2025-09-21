@class NSData;

@interface CDASchemaCDAElectionAdvertisingStartStarted : SISchemaInstrumentationMessage {
    struct { unsigned char state : 1; unsigned char advertisementInterval : 1; unsigned char advertisementDelay : 1; unsigned char voiceTriggerLatency : 1; } _has;
}

@property (nonatomic) int state;
@property (nonatomic) char hasState;
@property (nonatomic) float advertisementInterval;
@property (nonatomic) char hasAdvertisementInterval;
@property (nonatomic) float advertisementDelay;
@property (nonatomic) char hasAdvertisementDelay;
@property (nonatomic) float voiceTriggerLatency;
@property (nonatomic) char hasVoiceTriggerLatency;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAdvertisementDelay;
- (void)deleteAdvertisementInterval;
- (void)deleteState;
- (void)deleteVoiceTriggerLatency;
- (id)suppressMessageUnderConditions;

@end
