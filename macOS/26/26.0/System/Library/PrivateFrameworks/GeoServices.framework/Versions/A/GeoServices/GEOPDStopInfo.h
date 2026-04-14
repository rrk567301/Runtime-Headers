@class GEOTimezone, PBUnknownFields;

@interface GEOPDStopInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    GEOTimezone *_timezone;
    unsigned int _walkingTime;
    struct { unsigned char has_muid : 1; unsigned char has_walkingTime : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
