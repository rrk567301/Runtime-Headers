@class CKDPAssetsToDownload, CKDPQuery, NSData, CKDPRequestedFields, CKDPRecordZoneIdentifier;

@interface CKDPQueryRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char limit : 1; } _has;
}

@property (readonly, nonatomic) char hasQuery;
@property (retain, nonatomic) CKDPQuery *query;
@property (readonly, nonatomic) char hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (nonatomic) char hasLimit;
@property (nonatomic) unsigned int limit;
@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) char hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;
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
