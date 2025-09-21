@class NSString;

@interface BMPBSocialHighlightContact : PBCodable <NSCopying> {
    struct { unsigned char isMe : 1; unsigned char isSignificant : 1; } _has;
}

@property (nonatomic) char hasIsSignificant;
@property (nonatomic) char isSignificant;
@property (readonly, nonatomic) char hasHandle;
@property (retain, nonatomic) NSString *handle;
@property (nonatomic) char hasIsMe;
@property (nonatomic) char isMe;

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

@end
