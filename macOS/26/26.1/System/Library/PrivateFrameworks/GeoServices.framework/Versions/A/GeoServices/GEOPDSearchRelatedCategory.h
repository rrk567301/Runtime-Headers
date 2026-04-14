@class NSString;

@interface GEOPDSearchRelatedCategory : PBCodable <NSCopying> {
    long long _densityScore;
    NSString *_entityId;
    int _type;
    struct { unsigned char has_densityScore : 1; unsigned char has_type : 1; } _flags;
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
