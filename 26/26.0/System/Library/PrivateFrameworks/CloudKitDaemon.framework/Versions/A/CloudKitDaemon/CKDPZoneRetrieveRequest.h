@class NSData, CKDPRecordZoneIdentifier;

@interface CKDPZoneRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char onlyFetchPCSInfo : 1; unsigned char skipContinuation : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) BOOL hasOnlyFetchPCSInfo;
@property (nonatomic) BOOL onlyFetchPCSInfo;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (nonatomic) BOOL hasSkipContinuation;
@property (nonatomic) BOOL skipContinuation;

+ (id)options;

- (Class)responseClass;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
