@class NSMutableArray, PBDataReader;

@interface GEOWiFiQualityServiceResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_locationResults;
    NSMutableArray *_networkResults;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _statusCode;
    struct { unsigned char has_statusCode : 1; unsigned char read_locationResults : 1; unsigned char read_networkResults : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *locationResults;
@property (retain, nonatomic) NSMutableArray *networkResults;

+ (BOOL)isValid:(id)a0;
+ (Class)locationResultsType;
+ (Class)networkResultsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)statusCodeAsString:(int)a0;
- (int)StringAsStatusCode:(id)a0;
- (void)addLocationResults:(id)a0;
- (void)addNetworkResults:(id)a0;
- (unsigned long long)locationResultsCount;
- (void)clearLocationResults;
- (id)locationResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)networkResultsCount;
- (void)clearNetworkResults;
- (id)networkResultsAtIndex:(unsigned long long)a0;

@end
