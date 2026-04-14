@class CKDPRecordZoneIdentifier;

@interface CKDPZoneRetrieveAncestorsRequest : PBRequest <NSCopying> {
    struct { unsigned char onlyFetchPCSInfo : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) BOOL hasOnlyFetchPCSInfo;
@property (nonatomic) BOOL onlyFetchPCSInfo;

+ (id)options;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
