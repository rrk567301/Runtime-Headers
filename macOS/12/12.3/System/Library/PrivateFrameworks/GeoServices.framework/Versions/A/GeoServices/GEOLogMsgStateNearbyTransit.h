@class NSMutableArray;

@interface GEOLogMsgStateNearbyTransit : PBCodable <NSCopying> {
    NSMutableArray *_groups;
    unsigned int _pinnedLines;
    struct { unsigned char has_pinnedLines : 1; } _flags;
}

@property (nonatomic) BOOL hasPinnedLines;
@property (nonatomic) unsigned int pinnedLines;
@property (retain, nonatomic) NSMutableArray *groups;

+ (BOOL)isValid:(id)a0;
+ (Class)groupsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)addGroups:(id)a0;
- (unsigned long long)groupsCount;
- (void)clearGroups;
- (id)groupsAtIndex:(unsigned long long)a0;

@end
