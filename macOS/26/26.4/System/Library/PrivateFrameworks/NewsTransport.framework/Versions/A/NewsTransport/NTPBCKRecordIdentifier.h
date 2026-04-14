@class NTPBCKRecordZoneIdentifier, NTPBCKIdentifier;

@interface NTPBCKRecordIdentifier : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NTPBCKIdentifier *value;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) NTPBCKRecordZoneIdentifier *zoneIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
