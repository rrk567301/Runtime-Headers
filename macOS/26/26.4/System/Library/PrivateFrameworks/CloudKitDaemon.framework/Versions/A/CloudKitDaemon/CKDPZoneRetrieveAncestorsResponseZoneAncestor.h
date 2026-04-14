@class CKDPZoneRetrieveResponseZoneSummary, CKDPRecord;

@interface CKDPZoneRetrieveAncestorsResponseZoneAncestor : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasZoneSummary;
@property (retain, nonatomic) CKDPZoneRetrieveResponseZoneSummary *zoneSummary;
@property (readonly, nonatomic) BOOL hasShareRecord;
@property (retain, nonatomic) CKDPRecord *shareRecord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
