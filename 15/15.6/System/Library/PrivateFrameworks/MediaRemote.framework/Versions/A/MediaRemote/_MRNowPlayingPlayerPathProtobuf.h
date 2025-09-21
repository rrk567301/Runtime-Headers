@class _MROriginProtobuf, _MRNowPlayingClientProtobuf, _MRNowPlayingPlayerProtobuf;

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasOrigin;
@property (retain, nonatomic) _MROriginProtobuf *origin;
@property (readonly, nonatomic) char hasClient;
@property (retain, nonatomic) _MRNowPlayingClientProtobuf *client;
@property (readonly, nonatomic) char hasPlayer;
@property (retain, nonatomic) _MRNowPlayingPlayerProtobuf *player;

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
