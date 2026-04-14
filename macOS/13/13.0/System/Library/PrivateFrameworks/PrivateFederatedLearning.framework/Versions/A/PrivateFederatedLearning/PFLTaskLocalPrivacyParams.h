@interface PFLTaskLocalPrivacyParams : PBCodable <NSCopying> {
    struct { unsigned char clippingNormMax : 1; unsigned char normBinCount : 1; } _has;
}

@property (nonatomic) BOOL hasNormBinCount;
@property (nonatomic) long long normBinCount;
@property (nonatomic) BOOL hasClippingNormMax;
@property (nonatomic) double clippingNormMax;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
