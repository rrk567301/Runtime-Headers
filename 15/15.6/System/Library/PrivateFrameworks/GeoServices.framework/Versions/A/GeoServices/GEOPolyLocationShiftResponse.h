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

@property (readonly, nonatomic) char hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) int status;
@property (readonly, nonatomic) unsigned long long parametersCount;
@property (readonly, nonatomic) double *parameters;
@property (nonatomic) double radius;

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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (void)clearParameters;
- (void)addParameters:(double)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (double)parametersAtIndex:(unsigned long long)a0;
- (void)readAll:(char)a0;
- (void)setParameters:(double *)a0 count:(unsigned long long)a1;

@end
