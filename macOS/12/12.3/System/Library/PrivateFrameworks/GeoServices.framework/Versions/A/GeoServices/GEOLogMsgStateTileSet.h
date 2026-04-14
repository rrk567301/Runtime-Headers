@class NSMutableArray;

@interface GEOLogMsgStateTileSet : PBCodable <NSCopying> {
    NSMutableArray *_tileSetInfos;
}

@property (retain, nonatomic) NSMutableArray *tileSetInfos;

+ (BOOL)isValid:(id)a0;
+ (Class)tileSetInfoType;

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
- (void)addTileSetInfo:(id)a0;
- (unsigned long long)tileSetInfosCount;
- (void)clearTileSetInfos;
- (id)tileSetInfoAtIndex:(unsigned long long)a0;

@end
