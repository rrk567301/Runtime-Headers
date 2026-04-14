@class _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface _MRPlaybackSessionRequestMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) _MRPlaybackSessionRequestProtobuf *request;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
