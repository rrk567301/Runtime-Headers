@class NSMutableArray, NTPBPoint;

@interface NTPBColorGradient : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStartPoint;
@property (retain, nonatomic) NTPBPoint *startPoint;
@property (readonly, nonatomic) BOOL hasEndPoint;
@property (retain, nonatomic) NTPBPoint *endPoint;
@property (retain, nonatomic) NSMutableArray *colorStops;

+ (Class)colorStopsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)colorStopsCount;
- (void)clearColorStops;
- (void)addColorStops:(id)a0;
- (id)colorStopsAtIndex:(unsigned long long)a0;

@end
