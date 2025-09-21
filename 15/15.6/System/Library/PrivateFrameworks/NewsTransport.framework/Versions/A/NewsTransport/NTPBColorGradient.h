@class NSMutableArray, NTPBPoint;

@interface NTPBColorGradient : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasStartPoint;
@property (retain, nonatomic) NTPBPoint *startPoint;
@property (readonly, nonatomic) char hasEndPoint;
@property (retain, nonatomic) NTPBPoint *endPoint;
@property (retain, nonatomic) NSMutableArray *colorStops;

+ (Class)colorStopsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearColorStops;
- (unsigned long long)colorStopsCount;
- (void)addColorStops:(id)a0;
- (id)colorStopsAtIndex:(unsigned long long)a0;

@end
