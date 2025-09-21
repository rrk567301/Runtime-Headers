@class PBUnknownFields;

@interface GEOLogMsgStateUGCPhoto : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _photoSources;
}

@property (readonly, nonatomic) unsigned long long photoSourcesCount;
@property (readonly, nonatomic) int *photoSources;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsPhotoSources:(id)a0;
- (void)addPhotoSource:(int)a0;
- (void)clearPhotoSources;
- (int)photoSourceAtIndex:(unsigned long long)a0;
- (id)photoSourcesAsString:(int)a0;
- (void)setPhotoSources:(int *)a0 count:(unsigned long long)a1;

@end
