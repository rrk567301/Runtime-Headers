@class _MRNowPlayingPlayerPathProtobuf;

@interface _MRPlayerClientPropertiesMessageProtobuf : PBCodable <NSCopying> {
    double _lastPlayingTimestamp;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    struct { unsigned char lastPlayingTimestamp : 1; } _has;
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
