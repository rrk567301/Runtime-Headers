@class CKDPAssetsToDownload, NSData, CKDPRequestedFields, CKDPRecordZoneIdentifier;

@interface CKDPRecordRetrieveChangesRequest : PBRequest <NSCopying> {
    struct { unsigned char maxChanges : 1; unsigned char requestedChangeTypes : 1; unsigned char ignoreCallingDeviceChanges : 1; unsigned char includeMergeableDeltas : 1; unsigned char newestFirst : 1; } _has;
}

@property (readonly, nonatomic) char hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) char hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;
@property (nonatomic) char hasMaxChanges;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic) char hasRequestedChangeTypes;
@property (nonatomic) int requestedChangeTypes;
@property (readonly, nonatomic) char hasAssetsToDownload;
@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload;
@property (nonatomic) char hasNewestFirst;
@property (nonatomic) char newestFirst;
@property (nonatomic) char hasIgnoreCallingDeviceChanges;
@property (nonatomic) char ignoreCallingDeviceChanges;
@property (nonatomic) char hasIncludeMergeableDeltas;
@property (nonatomic) char includeMergeableDeltas;

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
- (int)StringAsRequestedChangeTypes:(id)a0;
- (id)requestedChangeTypesAsString:(int)a0;

@end
