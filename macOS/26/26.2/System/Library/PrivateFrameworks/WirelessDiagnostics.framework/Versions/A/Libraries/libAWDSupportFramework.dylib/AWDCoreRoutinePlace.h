@class NSMutableArray, AWDCoreRoutineMapItem;

@interface AWDCoreRoutinePlace : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMapItem;
@property (retain, nonatomic) AWDCoreRoutineMapItem *mapItem;
@property (retain, nonatomic) NSMutableArray *distanceToOtherPlaces;

+ (Class)distanceToOtherPlacesType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)addDistanceToOtherPlaces:(id)a0;
- (void)clearDistanceToOtherPlaces;
- (id)distanceToOtherPlacesAtIndex:(unsigned long long)a0;
- (unsigned long long)distanceToOtherPlacesCount;

@end
