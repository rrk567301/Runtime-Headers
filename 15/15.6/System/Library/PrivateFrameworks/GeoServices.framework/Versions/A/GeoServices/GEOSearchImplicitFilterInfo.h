@class PBUnknownFields;

@interface GEOSearchImplicitFilterInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _searchAlongRouteMuid;
    int _searchImplicitType;
    struct { unsigned char has_searchAlongRouteMuid : 1; unsigned char has_searchImplicitType : 1; } _flags;
}

@property (nonatomic) char hasSearchImplicitType;
@property (nonatomic) int searchImplicitType;
@property (nonatomic) char hasSearchAlongRouteMuid;
@property (nonatomic) unsigned long long searchAlongRouteMuid;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSearchImplicitType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)searchImplicitTypeAsString:(int)a0;

@end
