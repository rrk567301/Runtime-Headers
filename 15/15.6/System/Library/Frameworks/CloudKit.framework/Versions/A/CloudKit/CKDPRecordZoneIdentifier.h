@class CKDPIdentifier;

@interface CKDPRecordZoneIdentifier : PBCodable <NSCopying> {
    struct { unsigned char databaseType : 1; } _has;
}

@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) CKDPIdentifier *value;
@property (readonly, nonatomic) char hasOwnerIdentifier;
@property (retain, nonatomic) CKDPIdentifier *ownerIdentifier;
@property (nonatomic) char hasDatabaseType;
@property (nonatomic) int databaseType;

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
- (int)StringAsDatabaseType:(id)a0;
- (id)databaseTypeAsString:(int)a0;

@end
