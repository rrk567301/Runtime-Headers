@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgStateNearbyTransit : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_groups;
    unsigned int _pinnedLines;
    struct { unsigned char has_pinnedLines : 1; } _flags;
}

@property (nonatomic) BOOL hasPinnedLines;
@property (nonatomic) unsigned int pinnedLines;
@property (retain, nonatomic) NSMutableArray *groups;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)groupsType;

- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (void)addGroups:(id)a0;
- (void)clearGroups;
- (id)groupsAtIndex:(unsigned long long)a0;
- (unsigned long long)groupsCount;

@end
