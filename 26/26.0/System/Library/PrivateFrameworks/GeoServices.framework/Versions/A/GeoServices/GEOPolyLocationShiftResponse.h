@class GEOLatLng, PBDataReader;

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { double *list; unsigned long long count; unsigned long long size; } _parameters;
    GEOLatLng *_center;
    double _radius;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _status;
    struct { unsigned char read_parameters : 1; unsigned char read_center : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) int status;
@property (readonly, nonatomic) unsigned long long parametersCount;
@property (readonly, nonatomic) double *parameters;
@property (nonatomic) double radius;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (int)StringAsStatus:(id)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)statusAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearParameters;
- (void)addParameters:(double)a0;
- (double)parametersAtIndex:(unsigned long long)a0;
- (void)setParameters:(double *)a0 count:(unsigned long long)a1;

@end
