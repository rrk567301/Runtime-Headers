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
- (void)deleteAudioNowPlayingQueueCount;
- (void)deleteAudioNowPlayingQueueIndex;
- (void)deleteAudioEntitySource;
- (void)deleteAudioQueueStateItem;
- (void)deleteAudioState;

@end
