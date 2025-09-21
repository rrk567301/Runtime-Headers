@class NSString, CKDPProtectionInfo, NSData, CKDPRecordIdentifier;

@interface CKDPAsset : PBCodable <NSCopying> {
    struct { unsigned char constructedAssetDownloadEstimatedSize : 1; unsigned char constructedAssetDownloadURLExpiration : 1; unsigned char downloadTokenExpiration : 1; unsigned char downloadURLExpiration : 1; unsigned char size : 1; } _has;
}

@property (readonly, nonatomic) char hasOwner;
@property (retain, nonatomic) NSString *owner;
@property (readonly, nonatomic) char hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) char hasSize;
@property (nonatomic) long long size;
@property (readonly, nonatomic) char hasDownloadToken;
@property (retain, nonatomic) NSString *downloadToken;
@property (readonly, nonatomic) char hasDownloadRequest;
@property (retain, nonatomic) NSData *downloadRequest;
@property (readonly, nonatomic) char hasContentBaseURL;
@property (retain, nonatomic) NSString *contentBaseURL;
@property (readonly, nonatomic) char hasRequestor;
@property (retain, nonatomic) NSString *requestor;
@property (readonly, nonatomic) char hasRecordId;
@property (retain, nonatomic) CKDPRecordIdentifier *recordId;
@property (readonly, nonatomic) char hasUploadReceipt;
@property (retain, nonatomic) NSString *uploadReceipt;
@property (readonly, nonatomic) char hasDownloadBaseURL;
@property (retain, nonatomic) NSString *downloadBaseURL;
@property (nonatomic) char hasDownloadURLExpiration;
@property (nonatomic) long long downloadURLExpiration;
@property (readonly, nonatomic) char hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (readonly, nonatomic) char hasReferenceSignature;
@property (retain, nonatomic) NSData *referenceSignature;
@property (nonatomic) char hasDownloadTokenExpiration;
@property (nonatomic) long long downloadTokenExpiration;
@property (readonly, nonatomic) char hasClearAssetKey;
@property (retain, nonatomic) NSData *clearAssetKey;
@property (readonly, nonatomic) char hasAssetAuthorizationResponseUUID;
@property (retain, nonatomic) NSString *assetAuthorizationResponseUUID;
@property (readonly, nonatomic) char hasConstructedAssetDownloadURL;
@property (retain, nonatomic) NSString *constructedAssetDownloadURL;
@property (nonatomic) char hasConstructedAssetDownloadURLExpiration;
@property (nonatomic) long long constructedAssetDownloadURLExpiration;
@property (nonatomic) char hasConstructedAssetDownloadEstimatedSize;
@property (nonatomic) long long constructedAssetDownloadEstimatedSize;
@property (readonly, nonatomic) char hasConstructedAssetDownloadParameters;
@property (retain, nonatomic) NSData *constructedAssetDownloadParameters;

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
