@interface GEOLogMsgStateUGCPhoto : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _photoSources;
}

@property (readonly, nonatomic) unsigned long long photoSourcesCount;
@property (readonly, nonatomic) int *photoSources;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)addPhotoSource:(int)a0;
- (void)clearPhotoSources;
- (int)photoSourceAtIndex:(unsigned long long)a0;
- (void)setPhotoSources:(int *)a0 count:(unsigned long long)a1;
- (id)photoSourcesAsString:(int)a0;
- (int)StringAsPhotoSources:(id)a0;

@end
