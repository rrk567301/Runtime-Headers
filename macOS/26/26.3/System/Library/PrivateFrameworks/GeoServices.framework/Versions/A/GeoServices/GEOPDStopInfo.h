@class GEOTimezone, PBUnknownFields;

@interface GEOPDStopInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    GEOTimezone *_timezone;
    unsigned int _walkingTime;
    struct { unsigned char has_muid : 1; unsigned char has_walkingTime : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
