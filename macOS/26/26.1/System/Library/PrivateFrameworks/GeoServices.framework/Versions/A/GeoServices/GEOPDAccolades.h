@class NSMutableArray, PBUnknownFields;

@interface GEOPDAccolades : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_accolades;
}

+ (id)accoladeValuesForPlaceData:(id)a0;
+ (id)accoladesForPlaceData:(id)a0;

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
