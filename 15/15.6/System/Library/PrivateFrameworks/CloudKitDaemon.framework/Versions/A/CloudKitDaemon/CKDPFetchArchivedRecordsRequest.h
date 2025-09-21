@class NSData, CKDPAssetsToDownload, CKDPRecordZoneIdentifier;

@interface CKDPFetchArchivedRecordsRequest : PBRequest <NSCopying> {
    struct { unsigned char limit : 1; unsigned char newestFirst : 1; } _has;
}

@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) char hasArchiveContinuationToken;
@property (retain, nonatomic) NSData *archiveContinuationToken;
@property (nonatomic) char hasNewestFirst;
@property (nonatomic) char newestFirst;
@property (nonatomic) char hasLimit;
@property (nonatomic) unsigned int limit;
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
