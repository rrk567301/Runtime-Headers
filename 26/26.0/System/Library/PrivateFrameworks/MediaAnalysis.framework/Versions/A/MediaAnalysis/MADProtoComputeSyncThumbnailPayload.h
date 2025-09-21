@class NSMutableArray;

@interface MADProtoComputeSyncThumbnailPayload : PBCodable <NSCopying> {
    struct { unsigned char imageEmbeddingVersion : 1; } _has;
}

@property (nonatomic) BOOL hasImageEmbeddingVersion;
@property (nonatomic) int imageEmbeddingVersion;
@property (retain, nonatomic) NSMutableArray *imageEmbeddingResults;

+ (Class)imageEmbeddingResultsType;
+ (id)payloadFromVSKAsset:(id)a0 imageEmbeddingVersion:(short)a1;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addImageEmbeddingResults:(id)a0;
- (void)clearImageEmbeddingResults;
- (id)imageEmbeddingResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)imageEmbeddingResultsCount;
- (id)imageEmbeddingVSKAssetWithLocalIdentifier:(id)a0;
- (void)setImageEmbeddingResultsFromVSKAsset:(id)a0 imageEmbeddingVersion:(short)a1;

@end
