@class PBDataReader, NSMutableArray, NSMutableDictionary;

@interface GEOPublisherAttributionManifestIndex : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_publisherAttributionFiles;
    NSMutableDictionary *_publisherToFileIndex;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_publisherAttributionFiles : 1; unsigned char read_publisherToFileIndex : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *publisherAttributionFiles;
@property (retain, nonatomic) NSMutableDictionary *publisherToFileIndex;

+ (BOOL)isValid:(id)a0;
+ (Class)publisherAttributionFilesType;
+ (Class)publisherToFileIndexType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithData:(id)a0;
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
- (void)addPublisherAttributionFiles:(id)a0;
- (unsigned long long)publisherAttributionFilesCount;
- (void)clearPublisherAttributionFiles;
- (id)publisherAttributionFilesAtIndex:(unsigned long long)a0;
- (unsigned long long)publisherToFileIndexCount;
- (void)clearPublisherToFileIndex;
- (void)setPublisherToFileIndexValue:(unsigned int)a0 forKey:(id)a1;
- (unsigned int)publisherToFileIndexForKey:(id)a0;
- (void)enumeratePublisherToFileIndexUsingBlock:(id /* block */)a0;

@end
