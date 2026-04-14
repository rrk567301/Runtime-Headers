@class CKDPStreamingAssetRetrieveAssetResponse, CKDPStreamingAssetSaveAssetResponse, CKDPStreamingAssetIdentifier, CKDPStreamingAssetSaveAssetRequest;

@interface CKDPStreamingAsset : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAssetId;
@property (retain, nonatomic) CKDPStreamingAssetIdentifier *assetId;
@property (readonly, nonatomic) BOOL hasSaveAssetRequest;
@property (retain, nonatomic) CKDPStreamingAssetSaveAssetRequest *saveAssetRequest;
@property (readonly, nonatomic) BOOL hasSaveAssetResponse;
@property (retain, nonatomic) CKDPStreamingAssetSaveAssetResponse *saveAssetResponse;
@property (readonly, nonatomic) BOOL hasRetrieveAssetResponse;
@property (retain, nonatomic) CKDPStreamingAssetRetrieveAssetResponse *retrieveAssetResponse;

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
