@class _ICLLQueueQuery, _ICLLPlaybackControlSettingsQuery, _ICLLParticipantQuery, _ICLLPlaybackSyncStateQuery;

@interface _ICLLQueryMessage : PBCodable <NSCopying> {
    _ICLLParticipantQuery *_participant;
    _ICLLPlaybackControlSettingsQuery *_playbackControlSettings;
    _ICLLPlaybackSyncStateQuery *_playbackSyncState;
    int _query;
    _ICLLQueueQuery *_queue;
    struct { unsigned char query : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
