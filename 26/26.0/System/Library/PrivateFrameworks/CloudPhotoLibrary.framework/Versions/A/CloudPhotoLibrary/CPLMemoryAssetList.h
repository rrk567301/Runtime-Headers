@class NSMutableArray;

@interface CPLMemoryAssetList : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *assets;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;

+ (Class)assetType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)assetsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)clearAssets;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addAsset:(id)a0;
- (id)assetAtIndex:(unsigned long long)a0;

@end
