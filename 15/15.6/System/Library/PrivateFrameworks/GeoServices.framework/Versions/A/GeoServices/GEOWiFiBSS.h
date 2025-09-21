@class GEOLatLngE7, NSString, GEOLatLng, NSMutableArray, PBDataReader;

@interface GEOWiFiBSS : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _attributes;
    NSString *_identifier;
    GEOLatLngE7 *_latLngE7;
    GEOLatLng *_location;
    NSMutableArray *_qualities;
    long long _uniqueIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_uniqueIdentifier : 1; unsigned char read_attributes : 1; unsigned char read_identifier : 1; unsigned char read_latLngE7 : 1; unsigned char read_location : 1; unsigned char read_qualities : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (readonly, nonatomic) unsigned long long attributesCount;
@property (readonly, nonatomic) int *attributes;
@property (retain, nonatomic) NSMutableArray *qualities;
@property (nonatomic) char hasUniqueIdentifier;
@property (nonatomic) long long uniqueIdentifier;
@property (readonly, nonatomic) char hasLatLngE7;
@property (retain, nonatomic) GEOLatLngE7 *latLngE7;

+ (char)isValid:(id)a0;
+ (Class)qualitiesType;

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
- (int)StringAsAttributes:(id)a0;
- (void)clearAttributes;
- (void)addAttributes:(int)a0;
- (void)addQualities:(id)a0;
- (id)attributesAsString:(int)a0;
- (int)attributesAtIndex:(unsigned long long)a0;
- (void)clearQualities;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)qualitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)qualitiesCount;
- (void)readAll:(char)a0;
- (void)setAttributes:(int *)a0 count:(unsigned long long)a1;

@end
