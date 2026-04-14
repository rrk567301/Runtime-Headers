@class PBUnknownFields;

@interface GEOPDAvailabilityInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _availableNum;
    int _status;
    unsigned int _totalNum;
    struct { unsigned char has_availableNum : 1; unsigned char has_status : 1; unsigned char has_totalNum : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
