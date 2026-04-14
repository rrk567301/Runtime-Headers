@class NSData;

@interface READSchemaREADPlaybackSessionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char playedAudioDuration : 1; unsigned char totalDuration : 1; } _has;
}

@property (nonatomic) float playedAudioDuration;
@property (nonatomic) BOOL hasPlayedAudioDuration;
@property (nonatomic) float totalDuration;
@property (nonatomic) BOOL hasTotalDuration;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deletePlayedAudioDuration;
- (void)deleteTotalDuration;

@end
