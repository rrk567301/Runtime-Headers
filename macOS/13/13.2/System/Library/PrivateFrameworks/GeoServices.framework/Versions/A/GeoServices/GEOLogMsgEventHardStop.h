@class NSMutableArray, PBDataReader;

@interface GEOLogMsgEventHardStop : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _digits;
    NSMutableArray *_cities;
    double _score;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_score : 1; unsigned char read_digits : 1; unsigned char read_cities : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long digitsCount;
@property (readonly, nonatomic) unsigned int *digits;
@property (retain, nonatomic) NSMutableArray *cities;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;

+ (BOOL)isValid:(id)a0;
+ (Class)citiesType;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearDigits;
- (void)addDigits:(unsigned int)a0;
- (unsigned int)digitsAtIndex:(unsigned long long)a0;
- (void)setDigits:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)clearCities;
- (void)addCities:(id)a0;
- (unsigned long long)citiesCount;
- (id)citiesAtIndex:(unsigned long long)a0;

@end
