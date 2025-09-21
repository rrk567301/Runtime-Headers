@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDCategory : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_eventCategoryId;
    NSMutableArray *_localizedNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _level;
    struct { unsigned char has_level : 1; unsigned char read_unknownFields : 1; unsigned char read_eventCategoryId : 1; unsigned char read_localizedNames : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasLevel;
@property (nonatomic) int level;
@property (retain, nonatomic) NSMutableArray *localizedNames;
@property (readonly, nonatomic) char hasEventCategoryId;
@property (retain, nonatomic) NSString *eventCategoryId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)categoryNamesForPlaceData:(id)a0 type:(unsigned int)a1;
+ (id)_allCategoriesForPlaceData:(id)a0 type:(unsigned int)a1;
+ (char)hasCategoryNamesForPlaceData:(id)a0 type:(unsigned int)a1;
+ (char)isValid:(id)a0;
+ (Class)localizedNameType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLocalizedName:(id)a0;
- (id)bestLocalizedCategoryName;
- (void)clearLocalizedNames;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)localizedNameAtIndex:(unsigned long long)a0;
- (unsigned long long)localizedNamesCount;
- (void)readAll:(char)a0;

@end
