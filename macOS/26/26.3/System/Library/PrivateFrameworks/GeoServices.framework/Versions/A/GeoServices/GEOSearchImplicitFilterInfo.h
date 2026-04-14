@class PBUnknownFields;

@interface GEOSearchImplicitFilterInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _searchAlongRouteMuid;
    int _searchImplicitType;
    struct { unsigned char has_searchAlongRouteMuid : 1; unsigned char has_searchImplicitType : 1; } _flags;
}

@property (nonatomic) BOOL hasSearchImplicitType;
@property (nonatomic) int searchImplicitType;
@property (nonatomic) BOOL hasSearchAlongRouteMuid;
@property (nonatomic) unsigned long long searchAlongRouteMuid;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (int)StringAsSearchImplicitType:(id)a0;
- (id)searchImplicitTypeAsString:(int)a0;

@end
