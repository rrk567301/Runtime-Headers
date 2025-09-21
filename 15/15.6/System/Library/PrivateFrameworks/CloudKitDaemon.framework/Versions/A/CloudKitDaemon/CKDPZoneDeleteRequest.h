@class CKDPDate, CKDPAncestryEtag, CKDPRecordZoneIdentifier;

@interface CKDPZoneDeleteRequest : PBRequest <NSCopying> {
    struct { unsigned char userPurge : 1; } _has;
}

@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) char hasUserPurge;
@property (nonatomic) char userPurge;
@property (readonly, nonatomic) char hasLastMissingManateeIdentityErrorDate;
@property (retain, nonatomic) CKDPDate *lastMissingManateeIdentityErrorDate;
@property (readonly, nonatomic) char hasAncestryEtag;
@property (retain, nonatomic) CKDPAncestryEtag *ancestryEtag;

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
