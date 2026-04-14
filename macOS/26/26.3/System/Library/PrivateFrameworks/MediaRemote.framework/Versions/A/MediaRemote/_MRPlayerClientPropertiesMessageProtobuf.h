@class _MRNowPlayingPlayerPathProtobuf;

@interface _MRPlayerClientPropertiesMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char lastPlayingTimestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) BOOL hasLastPlayingTimestamp;
@property (nonatomic) double lastPlayingTimestamp;

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
