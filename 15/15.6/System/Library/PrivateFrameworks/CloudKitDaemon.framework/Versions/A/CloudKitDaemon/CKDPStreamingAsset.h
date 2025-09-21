@class CKDPStreamingAssetRetrieveAssetResponse, CKDPStreamingAssetSaveAssetResponse, CKDPStreamingAssetIdentifier, CKDPStreamingAssetSaveAssetRequest;

@interface CKDPStreamingAsset : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasAssetId;
@property (retain, nonatomic) CKDPStreamingAssetIdentifier *assetId;
@property (readonly, nonatomic) char hasSaveAssetRequest;
@property (retain, nonatomic) CKDPStreamingAssetSaveAssetRequest *saveAssetRequest;
@property (readonly, nonatomic) char hasSaveAssetResponse;
@property (retain, nonatomic) CKDPStreamingAssetSaveAssetResponse *saveAssetResponse;
@property (readonly, nonatomic) char hasRetrieveAssetResponse;
@property (retain, nonatomic) CKDPStreamingAssetRetrieveAssetResponse *retrieveAssetResponse;

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
