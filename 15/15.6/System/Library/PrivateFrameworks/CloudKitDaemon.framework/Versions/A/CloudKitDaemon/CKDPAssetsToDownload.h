@class CKDPRequestedFields;

@interface CKDPAssetsToDownload : PBCodable <NSCopying> {
    struct { unsigned char allAssets : 1; } _has;
}

@property (nonatomic) char hasAllAssets;
@property (nonatomic) char allAssets;
@property (readonly, nonatomic) char hasAssetFields;
@property (retain, nonatomic) CKDPRequestedFields *assetFields;

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
