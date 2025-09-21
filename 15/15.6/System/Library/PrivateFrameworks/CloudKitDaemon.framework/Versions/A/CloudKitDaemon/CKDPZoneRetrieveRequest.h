@class NSData, CKDPRecordZoneIdentifier;

@interface CKDPZoneRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char onlyFetchPCSInfo : 1; unsigned char skipContinuation : 1; } _has;
}

@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) char hasOnlyFetchPCSInfo;
@property (nonatomic) char onlyFetchPCSInfo;
@property (readonly, nonatomic) char hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (nonatomic) char hasSkipContinuation;
@property (nonatomic) char skipContinuation;

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
