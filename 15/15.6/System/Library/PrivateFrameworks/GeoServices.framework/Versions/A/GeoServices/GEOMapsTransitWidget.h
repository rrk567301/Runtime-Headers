@class NSMutableArray;

@interface GEOMapsTransitWidget : PBCodable <NSCopying> {
    NSMutableArray *_transitIncidentItems;
    int _tappedItemIndex;
    int _transitMessageType;
    char _everExpanded;
    char _initiallyExpanded;
    struct { unsigned char has_tappedItemIndex : 1; unsigned char has_transitMessageType : 1; unsigned char has_everExpanded : 1; unsigned char has_initiallyExpanded : 1; } _flags;
}

@property (nonatomic) char hasTransitMessageType;
@property (nonatomic) int transitMessageType;
@property (retain, nonatomic) NSMutableArray *transitIncidentItems;
@property (nonatomic) char hasInitiallyExpanded;
@property (nonatomic) char initiallyExpanded;
@property (nonatomic) char hasEverExpanded;
@property (nonatomic) char everExpanded;
@property (nonatomic) char hasTappedItemIndex;
@property (nonatomic) int tappedItemIndex;

+ (char)isValid:(id)a0;
+ (Class)transitIncidentItemType;

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
- (int)StringAsTransitMessageType:(id)a0;
- (void)addTransitIncidentItem:(id)a0;
- (void)clearTransitIncidentItems;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)transitIncidentItemAtIndex:(unsigned long long)a0;
- (unsigned long long)transitIncidentItemsCount;
- (id)transitMessageTypeAsString:(int)a0;

@end
