@class CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPRecordIdentifier : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) CKDPIdentifier *value;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;

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
