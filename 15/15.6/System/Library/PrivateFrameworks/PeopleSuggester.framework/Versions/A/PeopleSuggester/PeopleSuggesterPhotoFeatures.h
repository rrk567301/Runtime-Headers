@interface PeopleSuggesterPhotoFeatures : PBCodable <NSCopying> {
    struct { unsigned char isFavorited : 1; unsigned char isScreenShot : 1; } _has;
}

@property (nonatomic) char hasIsFavorited;
@property (nonatomic) char isFavorited;
@property (nonatomic) char hasIsScreenShot;
@property (nonatomic) char isScreenShot;

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
