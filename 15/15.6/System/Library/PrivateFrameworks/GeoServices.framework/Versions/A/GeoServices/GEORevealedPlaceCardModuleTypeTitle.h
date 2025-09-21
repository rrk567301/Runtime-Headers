@class PBUnknownFields;

@interface GEORevealedPlaceCardModuleTypeTitle : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _titleElements;
}

@property (readonly, nonatomic) unsigned long long titleElementsCount;
@property (readonly, nonatomic) int *titleElements;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (void)dealloc;
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
- (int)StringAsTitleElements:(id)a0;
- (void)addTitleElements:(int)a0;
- (void)clearTitleElements;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setTitleElements:(int *)a0 count:(unsigned long long)a1;
- (id)titleElementsAsString:(int)a0;
- (int)titleElementsAtIndex:(unsigned long long)a0;

@end
