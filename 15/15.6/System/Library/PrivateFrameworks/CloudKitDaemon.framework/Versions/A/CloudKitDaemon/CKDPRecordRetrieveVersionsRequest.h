@class CKDPAssetsToDownload, NSString, CKDPRecordIdentifier, CKDPRequestedFields;

@interface CKDPRecordRetrieveVersionsRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) char hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;
@property (readonly, nonatomic) char hasMinimumVersionEtag;
@property (retain, nonatomic) NSString *minimumVersionEtag;
@property (readonly, nonatomic) char hasAssetsToDownload;
@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload;

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
