@class CKDPRequestedFields;

@interface CKDPAssetsToDownload : PBCodable <NSCopying> {
    struct { unsigned char allAssets : 1; } _has;
}

@property (nonatomic) BOOL hasAllAssets;
@property (nonatomic) BOOL allAssets;
@property (readonly, nonatomic) BOOL hasAssetFields;
@property (retain, nonatomic) CKDPRequestedFields *assetFields;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
