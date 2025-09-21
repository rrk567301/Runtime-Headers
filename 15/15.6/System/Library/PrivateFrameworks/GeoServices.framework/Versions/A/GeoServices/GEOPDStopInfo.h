@class GEOTimezone, PBUnknownFields;

@interface GEOPDStopInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    GEOTimezone *_timezone;
    unsigned int _walkingTime;
    struct { unsigned char has_muid : 1; unsigned char has_walkingTime : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
