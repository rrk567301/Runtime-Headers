@class NSMutableArray, PBUnknownFields;

@interface GEOActiveResourceFilters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_filters;
}

@property (retain, nonatomic) NSMutableArray *filters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)filterType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (unsigned long long)filtersCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearFilters;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (id)filterAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (void)addFilter:(id)a0;
- (id)initWithJSON:(id)a0;

@end
