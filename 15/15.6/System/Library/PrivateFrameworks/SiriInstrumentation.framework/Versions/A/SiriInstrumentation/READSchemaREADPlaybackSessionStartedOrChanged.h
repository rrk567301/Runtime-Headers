@class TTSSchemaTTSAudioInterface, NSData;

@interface READSchemaREADPlaybackSessionStartedOrChanged : SISchemaInstrumentationMessage {
    struct { unsigned char customerPerceivedLatency : 1; unsigned char volume : 1; unsigned char playbackStateChange : 1; } _has;
}

@property (nonatomic) float customerPerceivedLatency;
@property (nonatomic) char hasCustomerPerceivedLatency;
@property (retain, nonatomic) TTSSchemaTTSAudioInterface *audioInterface;
@property (nonatomic) char hasAudioInterface;
@property (nonatomic) float volume;
@property (nonatomic) char hasVolume;
@property (nonatomic) int playbackStateChange;
@property (nonatomic) char hasPlaybackStateChange;
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
- (void)deleteAudioInterface;
- (void)deleteCustomerPerceivedLatency;
- (void)deletePlaybackStateChange;
- (void)deleteVolume;
- (id)suppressMessageUnderConditions;

@end
