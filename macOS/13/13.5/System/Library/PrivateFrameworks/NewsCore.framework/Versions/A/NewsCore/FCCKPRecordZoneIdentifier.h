@class FCCKPIdentifier;

@interface FCCKPRecordZoneIdentifier : PBCodable <NSCopying> {
    FCCKPIdentifier *_ownerIdentifier;
    FCCKPIdentifier *_value;
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
