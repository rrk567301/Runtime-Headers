@class CKDPZoneRetrieveResponseZoneSummary, CKDPRecord;

@interface CKDPZoneRetrieveAncestorsResponseZoneAncestor : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasZoneSummary;
@property (retain, nonatomic) CKDPZoneRetrieveResponseZoneSummary *zoneSummary;
@property (readonly, nonatomic) BOOL hasShareRecord;
@property (retain, nonatomic) CKDPRecord *shareRecord;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
