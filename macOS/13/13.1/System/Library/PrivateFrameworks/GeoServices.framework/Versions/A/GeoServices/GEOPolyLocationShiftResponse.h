@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _parameters;
    double _radius;
    int _status;
}

@property (nonatomic) int status;
@property (readonly, nonatomic) unsigned long long parametersCount;
@property (readonly, nonatomic) double *parameters;
@property (nonatomic) double radius;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearParameters;
- (void)addParameters:(double)a0;
- (double)parametersAtIndex:(unsigned long long)a0;
- (void)setParameters:(double *)a0 count:(unsigned long long)a1;

@end
