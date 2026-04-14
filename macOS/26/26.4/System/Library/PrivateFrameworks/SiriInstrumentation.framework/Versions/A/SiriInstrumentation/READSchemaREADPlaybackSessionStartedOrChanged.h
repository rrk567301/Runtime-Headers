@class TTSSchemaTTSAudioInterface, NSData;

@interface READSchemaREADPlaybackSessionStartedOrChanged : SISchemaInstrumentationMessage {
    struct { unsigned char customerPerceivedLatency : 1; unsigned char volume : 1; unsigned char playbackStateChange : 1; } _has;
}

@property (nonatomic) float customerPerceivedLatency;
@property (nonatomic) BOOL hasCustomerPerceivedLatency;
@property (retain, nonatomic) TTSSchemaTTSAudioInterface *audioInterface;
@property (nonatomic) BOOL hasAudioInterface;
@property (nonatomic) float volume;
@property (nonatomic) BOOL hasVolume;
@property (nonatomic) int playbackStateChange;
@property (nonatomic) BOOL hasPlaybackStateChange;
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
- (void)deleteAudioInterface;
- (void)deleteCustomerPerceivedLatency;
- (void)deletePlaybackStateChange;
- (void)deleteVolume;

@end
