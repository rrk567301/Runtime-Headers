@class NSMutableArray;

@interface GEOMapsDestinationsWidget : PBCodable <NSCopying> {
    NSMutableArray *_proactiveItems;
    int _tappedItemIndex;
    char _everExpanded;
    char _initiallyExpanded;
    struct { unsigned char has_tappedItemIndex : 1; unsigned char has_everExpanded : 1; unsigned char has_initiallyExpanded : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *proactiveItems;
@property (nonatomic) char hasInitiallyExpanded;
@property (nonatomic) char initiallyExpanded;
@property (nonatomic) char hasEverExpanded;
@property (nonatomic) char everExpanded;
@property (nonatomic) char hasTappedItemIndex;
@property (nonatomic) int tappedItemIndex;

+ (char)isValid:(id)a0;
+ (Class)proactiveItemType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addProactiveItem:(id)a0;
- (void)clearProactiveItems;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)proactiveItemAtIndex:(unsigned long long)a0;
- (unsigned long long)proactiveItemsCount;
- (void)readAll:(char)a0;

@end
