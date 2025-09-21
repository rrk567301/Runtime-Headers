@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgStateTileSet : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_tileSetInfos;
}

@property (retain, nonatomic) NSMutableArray *tileSetInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)tileSetInfoType;
+ (char)isValid:(id)a0;

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
- (void)addTileSetInfo:(id)a0;
- (void)clearTileSetInfos;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)tileSetInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)tileSetInfosCount;

@end
