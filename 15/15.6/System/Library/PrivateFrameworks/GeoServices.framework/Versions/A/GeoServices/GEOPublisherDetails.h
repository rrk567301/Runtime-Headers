@class PBUnknownFields;

@interface GEOPublisherDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _publisherIds;
    char _currentlyFollowing;
    struct { unsigned char has_currentlyFollowing : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long publisherIdsCount;
@property (readonly, nonatomic) unsigned long long *publisherIds;
@property (nonatomic) char hasCurrentlyFollowing;
@property (nonatomic) char currentlyFollowing;
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
- (void)addPublisherId:(unsigned long long)a0;
- (void)clearPublisherIds;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)publisherIdAtIndex:(unsigned long long)a0;
- (void)readAll:(char)a0;
- (void)setPublisherIds:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
