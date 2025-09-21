@class NSMutableArray;

@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable <NSCopying> {
    NSMutableArray *_proactiveItems;
    int _duration;
    int _interactedItemIndex;
    int _listType;
    struct { unsigned char has_duration : 1; unsigned char has_interactedItemIndex : 1; unsigned char has_listType : 1; } _flags;
}

@property (nonatomic) char hasListType;
@property (nonatomic) int listType;
@property (retain, nonatomic) NSMutableArray *proactiveItems;
@property (nonatomic) char hasDuration;
@property (nonatomic) int duration;
@property (nonatomic) char hasInteractedItemIndex;
@property (nonatomic) int interactedItemIndex;

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
- (int)StringAsListType:(id)a0;
- (void)addProactiveItem:(id)a0;
- (void)clearProactiveItems;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)listTypeAsString:(int)a0;
- (id)proactiveItemAtIndex:(unsigned long long)a0;
- (unsigned long long)proactiveItemsCount;
- (void)readAll:(char)a0;

@end
