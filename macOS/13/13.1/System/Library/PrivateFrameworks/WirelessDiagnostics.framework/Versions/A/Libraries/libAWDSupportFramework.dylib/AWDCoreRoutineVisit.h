@class NSMutableArray, AWDCoreRoutineMapItem;

@interface AWDCoreRoutineVisit : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _mapItemSources;
    struct { unsigned char dwellTime : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long mapItemSourcesCount;
@property (readonly, nonatomic) int *mapItemSources;
@property (retain, nonatomic) NSMutableArray *possibleMapItems;
@property (readonly, nonatomic) BOOL hasSelectedMapItem;
@property (retain, nonatomic) AWDCoreRoutineMapItem *selectedMapItem;
@property (nonatomic) BOOL hasDwellTime;
@property (nonatomic) unsigned long long dwellTime;

+ (Class)possibleMapItemsType;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addPossibleMapItems:(id)a0;
- (void)addMapItemSources:(int)a0;
- (void)clearMapItemSources;
- (int)mapItemSourcesAtIndex:(unsigned long long)a0;
- (void)setMapItemSources:(int *)a0 count:(unsigned long long)a1;
- (id)mapItemSourcesAsString:(int)a0;
- (int)StringAsMapItemSources:(id)a0;
- (void)clearPossibleMapItems;
- (unsigned long long)possibleMapItemsCount;
- (id)possibleMapItemsAtIndex:(unsigned long long)a0;

@end
