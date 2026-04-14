@class FCCKPIdentifier, FCCKPRecordZoneIdentifier;

@interface FCCKPRecordIdentifier : PBCodable <NSCopying> {
    FCCKPIdentifier *_value;
    FCCKPRecordZoneIdentifier *_zoneIdentifier;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
