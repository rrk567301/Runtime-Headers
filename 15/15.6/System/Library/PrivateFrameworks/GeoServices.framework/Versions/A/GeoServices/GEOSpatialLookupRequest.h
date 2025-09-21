@class GEOLatLng, PBDataReader;

@interface GEOSpatialLookupRequest : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _categorys;
    GEOLatLng *_center;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _maxResults;
    int _radius;
    struct { unsigned char has_maxResults : 1; unsigned char has_radius : 1; unsigned char read_categorys : 1; unsigned char read_center : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) char hasRadius;
@property (nonatomic) int radius;
@property (nonatomic) char hasMaxResults;
@property (nonatomic) int maxResults;
@property (readonly, nonatomic) unsigned long long categorysCount;
@property (readonly, nonatomic) int *categorys;

+ (char)isValid:(id)a0;

- (void)dealloc;
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
- (int)StringAsCategorys:(id)a0;
- (void)addCategory:(int)a0;
- (int)categoryAtIndex:(unsigned long long)a0;
- (id)categorysAsString:(int)a0;
- (void)clearCategorys;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setCategorys:(int *)a0 count:(unsigned long long)a1;

@end
