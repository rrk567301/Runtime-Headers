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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
