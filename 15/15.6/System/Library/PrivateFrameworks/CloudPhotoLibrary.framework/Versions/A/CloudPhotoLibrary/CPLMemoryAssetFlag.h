@interface CPLMemoryAssetFlag : PBCodable <NSCopying> {
    struct { unsigned char isCurated : 1; unsigned char isCustomUserAsset : 1; unsigned char isExtendedCurated : 1; unsigned char isKeyAsset : 1; unsigned char isMovieCurated : 1; unsigned char isRepresentative : 1; unsigned char isUserCurated : 1; } _has;
}

@property (nonatomic) char hasIsRepresentative;
@property (nonatomic) char isRepresentative;
@property (nonatomic) char hasIsCurated;
@property (nonatomic) char isCurated;
@property (nonatomic) char hasIsMovieCurated;
@property (nonatomic) char isMovieCurated;
@property (nonatomic) char hasIsKeyAsset;
@property (nonatomic) char isKeyAsset;
@property (nonatomic) char hasIsExtendedCurated;
@property (nonatomic) char isExtendedCurated;
@property (nonatomic) char hasIsUserCurated;
@property (nonatomic) char isUserCurated;
@property (nonatomic) char hasIsCustomUserAsset;
@property (nonatomic) char isCustomUserAsset;

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
