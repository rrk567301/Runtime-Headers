@class PBUnknownFields;

@interface GEOPDSearchZeroKeywordEntry : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _categoryIndexs;
    unsigned int _dayOfWeek;
    unsigned int _hourOfDay;
    struct { unsigned char has_dayOfWeek : 1; unsigned char has_hourOfDay : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
