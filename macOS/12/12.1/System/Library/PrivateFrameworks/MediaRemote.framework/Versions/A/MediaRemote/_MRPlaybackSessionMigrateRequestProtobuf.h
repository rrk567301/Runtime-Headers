@class _MRNowPlayingPlayerPathProtobuf, _MRContentItemProtobuf, _MRPlaybackSessionRequestProtobuf, NSString, NSMutableArray;

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying> {
    double _playbackPosition;
    double _playbackRate;
    _MRContentItemProtobuf *_contentItem;
    unsigned int _destinationTypes;
    int _endpointOptions;
    NSMutableArray *_events;
    unsigned int _originatorType;
    _MRPlaybackSessionRequestProtobuf *_playbackSessionRequest;
    int _playbackState;
    int _playerOptions;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSString *_requestID;
    BOOL _allowFadeTransition;
    struct { unsigned char playbackPosition : 1; unsigned char playbackRate : 1; unsigned char destinationTypes : 1; unsigned char endpointOptions : 1; unsigned char originatorType : 1; unsigned char playbackState : 1; unsigned char playerOptions : 1; unsigned char allowFadeTransition : 1; } _has;
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
