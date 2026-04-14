@class NSMutableArray, AWDCoreRoutineMapItem;

@interface AWDCoreRoutinePlace : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMapItem;
@property (retain, nonatomic) AWDCoreRoutineMapItem *mapItem;
@property (retain, nonatomic) NSMutableArray *distanceToOtherPlaces;

+ (Class)distanceToOtherPlacesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addDistanceToOtherPlaces:(id)a0;
- (unsigned long long)distanceToOtherPlacesCount;
- (void)clearDistanceToOtherPlaces;
- (id)distanceToOtherPlacesAtIndex:(unsigned long long)a0;

@end
