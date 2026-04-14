@class NSMutableArray, PBUnknownFields;

@interface GEOPDCategory : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_localizedNames;
    int _level;
    struct { unsigned char has_level : 1; } _flags;
}

@property (nonatomic) BOOL hasLevel;
@property (nonatomic) int level;
@property (retain, nonatomic) NSMutableArray *localizedNames;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (id)_allCategoriesForPlaceData:(id)a0 type:(unsigned int)a1;
+ (id)categoryNamesForPlaceData:(id)a0 type:(unsigned int)a1;
+ (BOOL)hasCategoryNamesForPlaceData:(id)a0 type:(unsigned int)a1;
+ (Class)localizedNameType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)localizedNamesCount;
- (void)addLocalizedName:(id)a0;
- (void)clearLocalizedNames;
- (id)localizedNameAtIndex:(unsigned long long)a0;

@end
