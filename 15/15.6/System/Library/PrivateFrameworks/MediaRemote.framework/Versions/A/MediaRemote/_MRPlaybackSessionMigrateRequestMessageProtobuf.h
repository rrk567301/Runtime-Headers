@class _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionMigrateRequestProtobuf, _MRPlaybackSessionProtobuf;

@interface _MRPlaybackSessionMigrateRequestMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasPlaybackSession;
@property (retain, nonatomic) _MRPlaybackSessionProtobuf *playbackSession;
@property (readonly, nonatomic) char hasRequest;
@property (retain, nonatomic) _MRPlaybackSessionMigrateRequestProtobuf *request;
@property (readonly, nonatomic) char hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
