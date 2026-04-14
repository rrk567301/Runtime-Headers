@class NSData;

@interface CKDPZoneRetrieveChangesRequest : PBRequest <NSCopying> {
    struct { unsigned char maxChangedZones : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (nonatomic) BOOL hasMaxChangedZones;
@property (nonatomic) unsigned int maxChangedZones;

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
