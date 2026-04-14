@class _MRTransactionPacketsProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface _MRTransactionMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char name : 1; } _has;
}

@property (nonatomic) BOOL hasName;
@property (nonatomic) unsigned long long name;
@property (readonly, nonatomic) BOOL hasPackets;
@property (retain, nonatomic) _MRTransactionPacketsProtobuf *packets;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
