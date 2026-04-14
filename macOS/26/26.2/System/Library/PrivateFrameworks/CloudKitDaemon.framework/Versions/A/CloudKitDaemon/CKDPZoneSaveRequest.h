@class NSString, CKDPAncestryEtag, CKDPZone;

@interface CKDPZoneSaveRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordZone;
@property (retain, nonatomic) CKDPZone *recordZone;
@property (readonly, nonatomic) BOOL hasZoneProtectionInfoTag;
@property (retain, nonatomic) NSString *zoneProtectionInfoTag;
@property (readonly, nonatomic) BOOL hasAncestryEtag;
@property (retain, nonatomic) CKDPAncestryEtag *ancestryEtag;
@property (readonly, nonatomic) BOOL hasReParentingDestinationAncestryEtag;
@property (retain, nonatomic) CKDPAncestryEtag *reParentingDestinationAncestryEtag;

+ (id)options;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (Class)responseClass;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;

@end
