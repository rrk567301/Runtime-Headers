@interface TRITrialMobileAssetOriginFields : PBCodable <NSCopying> {
    struct { unsigned char isMobileAsset : 1; } _has;
}

@property (nonatomic) BOOL hasIsMobileAsset;
@property (nonatomic) BOOL isMobileAsset;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
