@class NTPBCKIdentifier;

@interface NTPBCKRecordZoneIdentifier : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) NTPBCKIdentifier *value;
@property (readonly, nonatomic) char hasOwnerIdentifier;
@property (retain, nonatomic) NTPBCKIdentifier *ownerIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
