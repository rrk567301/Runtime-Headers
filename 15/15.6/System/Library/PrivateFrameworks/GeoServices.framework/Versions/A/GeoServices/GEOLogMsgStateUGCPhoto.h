@class PBUnknownFields;

@interface GEOLogMsgStateUGCPhoto : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _photoSources;
}

@property (readonly, nonatomic) unsigned long long photoSourcesCount;
@property (readonly, nonatomic) int *photoSources;
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
- (int)StringAsPhotoSources:(id)a0;
- (void)addPhotoSource:(int)a0;
- (void)clearPhotoSources;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (int)photoSourceAtIndex:(unsigned long long)a0;
- (id)photoSourcesAsString:(int)a0;
- (void)readAll:(char)a0;
- (void)setPhotoSources:(int *)a0 count:(unsigned long long)a1;

@end
