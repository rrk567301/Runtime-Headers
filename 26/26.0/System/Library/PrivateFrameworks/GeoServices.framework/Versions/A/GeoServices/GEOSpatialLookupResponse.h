@class NSMutableArray;

@interface GEOSpatialLookupResponse : PBCodable <NSCopying> {
    NSMutableArray *_places;
    int _statusCode;
    struct { unsigned char has_statusCode : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *places;

+ (BOOL)isValid:(id)a0;
+ (Class)placeType;

- (id)initWithDictionary:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)a0;
- (void)addPlace:(id)a0;
- (void)clearPlaces;
- (id)placeAtIndex:(unsigned long long)a0;
- (unsigned long long)placesCount;
- (id)statusCodeAsString:(int)a0;

@end
