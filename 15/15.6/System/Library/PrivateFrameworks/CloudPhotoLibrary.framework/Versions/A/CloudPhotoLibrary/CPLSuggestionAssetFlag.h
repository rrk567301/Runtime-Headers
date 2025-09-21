@interface CPLSuggestionAssetFlag : PBCodable <NSCopying> {
    struct { unsigned char isKeyAsset : 1; unsigned char isRepresentative : 1; } _has;
}

@property (nonatomic) char hasIsRepresentative;
@property (nonatomic) char isRepresentative;
@property (nonatomic) char hasIsKeyAsset;
@property (nonatomic) char isKeyAsset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
