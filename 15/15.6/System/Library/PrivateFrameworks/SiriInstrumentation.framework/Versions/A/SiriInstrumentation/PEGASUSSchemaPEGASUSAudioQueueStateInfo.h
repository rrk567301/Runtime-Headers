@class PEGASUSSchemaPEGASUSAudioQueueStateItem, NSData;

@interface PEGASUSSchemaPEGASUSAudioQueueStateInfo : SISchemaInstrumentationMessage {
    struct { unsigned char audioState : 1; unsigned char audioEntitySource : 1; unsigned char audioNowPlayingQueueIndex : 1; unsigned char audioNowPlayingQueueCount : 1; } _has;
}

@property (nonatomic) int audioState;
@property (nonatomic) char hasAudioState;
@property (nonatomic) int audioEntitySource;
@property (nonatomic) char hasAudioEntitySource;
@property (nonatomic) int audioNowPlayingQueueIndex;
@property (nonatomic) char hasAudioNowPlayingQueueIndex;
@property (nonatomic) int audioNowPlayingQueueCount;
@property (nonatomic) char hasAudioNowPlayingQueueCount;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioQueueStateItem *audioQueueStateItem;
@property (nonatomic) char hasAudioQueueStateItem;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAudioNowPlayingQueueIndex;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAudioNowPlayingQueueCount;
- (void)deleteAudioEntitySource;
- (void)deleteAudioQueueStateItem;
- (void)deleteAudioState;
- (id)suppressMessageUnderConditions;

@end
