@class NSString, CKDPAncestryEtag, CKDPZone;

@interface CKDPZoneSaveRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasRecordZone;
@property (retain, nonatomic) CKDPZone *recordZone;
@property (readonly, nonatomic) char hasZoneProtectionInfoTag;
@property (retain, nonatomic) NSString *zoneProtectionInfoTag;
@property (readonly, nonatomic) char hasAncestryEtag;
@property (retain, nonatomic) CKDPAncestryEtag *ancestryEtag;
@property (readonly, nonatomic) char hasReParentingDestinationAncestryEtag;
@property (retain, nonatomic) CKDPAncestryEtag *reParentingDestinationAncestryEtag;

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
