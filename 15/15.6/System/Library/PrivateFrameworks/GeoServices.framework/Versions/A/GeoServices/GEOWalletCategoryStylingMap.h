@class NSMutableArray;

@interface GEOWalletCategoryStylingMap : PBCodable <NSCopying> {
    NSMutableArray *_mappings;
}

@property (retain, nonatomic) NSMutableArray *mappings;

+ (char)isValid:(id)a0;
+ (Class)mappingsType;

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
- (void)addMappings:(id)a0;
- (void)clearMappings;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)mappingsAtIndex:(unsigned long long)a0;
- (unsigned long long)mappingsCount;
- (void)readAll:(char)a0;

@end
