@class NSString;

@interface GEOPDSearchTokenImportance : PBCodable <NSCopying> {
    NSString *_token;
    float _score;
    struct { unsigned char has_score : 1; } _flags;
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
