@interface GEOProactiveItem : PBCodable <NSCopying> {
    int _proactiveItemType;
    int _timeSinceStart;
    char _deleted;
    char _edited;
    char _shared;
    char _tapped;
    char _visible;
    struct { unsigned char has_proactiveItemType : 1; unsigned char has_timeSinceStart : 1; unsigned char has_deleted : 1; unsigned char has_edited : 1; unsigned char has_shared : 1; unsigned char has_tapped : 1; unsigned char has_visible : 1; } _flags;
}

@property (nonatomic) char hasProactiveItemType;
@property (nonatomic) int proactiveItemType;
@property (nonatomic) char hasTimeSinceStart;
@property (nonatomic) int timeSinceStart;
@property (nonatomic) char hasVisible;
@property (nonatomic) char visible;
@property (nonatomic) char hasTapped;
@property (nonatomic) char tapped;
@property (nonatomic) char hasShared;
@property (nonatomic) char shared;
@property (nonatomic) char hasEdited;
@property (nonatomic) char edited;
@property (nonatomic) char hasDeleted;
@property (nonatomic) char deleted;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsProactiveItemType:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)proactiveItemTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
