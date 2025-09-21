@class CKDPAssetsToDownload, NSString, CKDPRecordRetrieveRequestRetrieveAssetURL, CKDPRecordIdentifier, CKDPRequestedFields;

@interface CKDPRecordRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char requestEncryptedAssetUserIdentifiers : 1; unsigned char shouldFailBatch : 1; } _has;
}

@property (readonly, nonatomic) char hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) char hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;
@property (readonly, nonatomic) char hasVersionETag;
@property (retain, nonatomic) NSString *versionETag;
@property (readonly, nonatomic) char hasClientVersionETag;
@property (retain, nonatomic) NSString *clientVersionETag;
@property (readonly, nonatomic) char hasGetAssetURL;
@property (retain, nonatomic) CKDPRecordRetrieveRequestRetrieveAssetURL *getAssetURL;
@property (readonly, nonatomic) char hasAssetsToDownload;
@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload;
@property (nonatomic) char hasShouldFailBatch;
@property (nonatomic) char shouldFailBatch;
@property (nonatomic) char hasRequestEncryptedAssetUserIdentifiers;
@property (nonatomic) char requestEncryptedAssetUserIdentifiers;

+ (id)options;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
