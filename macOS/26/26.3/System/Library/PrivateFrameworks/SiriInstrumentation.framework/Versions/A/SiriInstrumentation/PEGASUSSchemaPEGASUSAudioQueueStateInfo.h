@class PEGASUSSchemaPEGASUSAudioQueueStateItem, NSData;

@interface PEGASUSSchemaPEGASUSAudioQueueStateInfo : SISchemaInstrumentationMessage {
    struct { unsigned char audioState : 1; unsigned char audioEntitySource : 1; unsigned char audioNowPlayingQueueIndex : 1; unsigned char audioNowPlayingQueueCount : 1; } _has;
}

@property (nonatomic) int audioState;
@property (nonatomic) BOOL hasAudioState;
@property (nonatomic) int audioEntitySource;
@property (nonatomic) BOOL hasAudioEntitySource;
@property (nonatomic) int audioNowPlayingQueueIndex;
@property (nonatomic) BOOL hasAudioNowPlayingQueueIndex;
@property (nonatomic) int audioNowPlayingQueueCount;
@property (nonatomic) BOOL hasAudioNowPlayingQueueCount;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioQueueStateItem *audioQueueStateItem;
@property (nonatomic) BOOL hasAudioQueueStateItem;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAudioNowPlayingQueueCount;
- (void)deleteAudioNowPlayingQueueIndex;
- (void)deleteAudioEntitySource;
- (void)deleteAudioQueueStateItem;
- (void)deleteAudioState;

@end
