@class NSString, _MRLyricsTokenProtobuf;

@interface _MRLyricsItemProtobuf : PBCodable <NSCopying> {
    struct { unsigned char userProvided : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLyrics;
@property (retain, nonatomic) NSString *lyrics;
@property (nonatomic) BOOL hasUserProvided;
@property (nonatomic) BOOL userProvided;
@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) _MRLyricsTokenProtobuf *token;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
