@interface GEOTileSetUsage : PBCodable <NSCopying> {
    unsigned int _count;
    int _style;
    struct { unsigned char has_count : 1; unsigned char has_style : 1; } _flags;
}

@property (nonatomic) char hasStyle;
@property (nonatomic) int style;
@property (nonatomic) char hasCount;
@property (nonatomic) unsigned int count;

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
- (int)StringAsStyle:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)styleAsString:(int)a0;

@end
