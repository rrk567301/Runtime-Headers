@class NSMutableArray;

@interface GEOSpatialLookupResponse : PBCodable <NSCopying> {
    NSMutableArray *_places;
    int _statusCode;
    struct { unsigned char has_statusCode : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *places;

+ (Class)placeType;
+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (int)StringAsStatusCode:(id)a0;
- (void)addPlace:(id)a0;
- (void)clearPlaces;
- (id)placeAtIndex:(unsigned long long)a0;
- (unsigned long long)placesCount;
- (id)statusCodeAsString:(int)a0;

@end
