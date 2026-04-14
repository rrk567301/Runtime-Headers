@class NSMutableArray, NTPBPoint;

@interface NTPBColorGradient : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStartPoint;
@property (retain, nonatomic) NTPBPoint *startPoint;
@property (readonly, nonatomic) BOOL hasEndPoint;
@property (retain, nonatomic) NTPBPoint *endPoint;
@property (retain, nonatomic) NSMutableArray *colorStops;

+ (Class)colorStopsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (unsigned long long)colorStopsCount;
- (void)clearColorStops;
- (void)addColorStops:(id)a0;
- (id)colorStopsAtIndex:(unsigned long long)a0;

@end
