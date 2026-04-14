@class _MRNowPlayingPlayerPathProtobuf;

@interface _MRAudioFadeMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char fadeType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) BOOL hasFadeType;
@property (nonatomic) int fadeType;

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
- (int)StringAsFadeType:(id)a0;
- (id)fadeTypeAsString:(int)a0;

@end
