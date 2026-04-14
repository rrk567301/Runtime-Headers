@class _MRNowPlayingPlayerPathProtobuf;

@interface _MRSetNowPlayingPlayerMessageProtobuf : PBCodable <NSCopying> {
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
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
