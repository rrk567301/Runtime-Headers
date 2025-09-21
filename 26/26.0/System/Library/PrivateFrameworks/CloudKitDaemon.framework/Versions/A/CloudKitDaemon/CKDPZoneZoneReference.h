@class CKDPRecordZoneIdentifier;

@interface CKDPZoneZoneReference : PBCodable <NSCopying> {
    struct { unsigned char referenceType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) BOOL hasReferenceType;
@property (nonatomic) int referenceType;

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
- (int)StringAsReferenceType:(id)a0;
- (id)referenceTypeAsString:(int)a0;

@end
