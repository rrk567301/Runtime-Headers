@class _MRNowPlayingPlayerPathProtobuf, NSString, NSMutableArray, _MRPlaybackQueueContextProtobuf;

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {
    NSMutableArray *_contentItems;
    _MRPlaybackQueueContextProtobuf *_context;
    int _location;
    NSMutableArray *_participants;
    NSString *_queueIdentifier;
    NSString *_requestID;
    _MRNowPlayingPlayerPathProtobuf *_resolvedPlayerPath;
    BOOL _sendingPlaybackQueueTransaction;
    struct { unsigned char location : 1; unsigned char sendingPlaybackQueueTransaction : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
