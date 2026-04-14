@interface GEOPDSearchSpanScore : PBCodable <NSCopying> {
    double _score;
    int _intentType;
    struct { unsigned char has_score : 1; unsigned char has_intentType : 1; } _flags;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;

@end
