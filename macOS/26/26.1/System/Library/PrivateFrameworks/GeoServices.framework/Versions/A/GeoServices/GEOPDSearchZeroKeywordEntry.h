@class PBUnknownFields;

@interface GEOPDSearchZeroKeywordEntry : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _categoryIndexs;
    unsigned int _dayOfWeek;
    unsigned int _hourOfDay;
    struct { unsigned char has_dayOfWeek : 1; unsigned char has_hourOfDay : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
