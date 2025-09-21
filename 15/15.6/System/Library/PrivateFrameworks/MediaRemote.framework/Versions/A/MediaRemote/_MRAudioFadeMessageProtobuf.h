@class _MRNowPlayingPlayerPathProtobuf;

@interface _MRAudioFadeMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char fadeType : 1; } _has;
}

@property (readonly, nonatomic) char hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) char hasFadeType;
@property (nonatomic) int fadeType;

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
- (int)StringAsFadeType:(id)a0;
- (id)fadeTypeAsString:(int)a0;

@end
