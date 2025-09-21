@interface PeopleSuggesterPhotoFeatures : PBCodable <NSCopying> {
    struct { unsigned char isFavorited : 1; unsigned char isScreenShot : 1; } _has;
}

@property (nonatomic) BOOL hasIsFavorited;
@property (nonatomic) BOOL isFavorited;
@property (nonatomic) BOOL hasIsScreenShot;
@property (nonatomic) BOOL isScreenShot;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
