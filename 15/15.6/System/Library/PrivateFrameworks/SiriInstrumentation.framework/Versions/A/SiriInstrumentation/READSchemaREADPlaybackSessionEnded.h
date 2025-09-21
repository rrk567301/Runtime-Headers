@class NSData;

@interface READSchemaREADPlaybackSessionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char playedAudioDuration : 1; unsigned char totalDuration : 1; } _has;
}

@property (nonatomic) float playedAudioDuration;
@property (nonatomic) char hasPlayedAudioDuration;
@property (nonatomic) float totalDuration;
@property (nonatomic) char hasTotalDuration;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePlayedAudioDuration;
- (void)deleteTotalDuration;
- (id)suppressMessageUnderConditions;

@end
