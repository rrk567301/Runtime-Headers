@interface GEORevealedPlaceCardModuleTypeTitle : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _titleElements;
}

@property (readonly, nonatomic) unsigned long long titleElementsCount;
@property (readonly, nonatomic) int *titleElements;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearTitleElements;
- (void)addTitleElements:(int)a0;
- (int)titleElementsAtIndex:(unsigned long long)a0;
- (void)setTitleElements:(int *)a0 count:(unsigned long long)a1;
- (id)titleElementsAsString:(int)a0;
- (int)StringAsTitleElements:(id)a0;

@end
