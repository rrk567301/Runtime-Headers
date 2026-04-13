@class _MRTransactionPacketsProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface _MRTransactionMessageProtobuf : PBCodable <NSCopying> {
    unsigned long long _name;
    _MRTransactionPacketsProtobuf *_packets;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    struct { unsigned char name : 1; } _has;
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
