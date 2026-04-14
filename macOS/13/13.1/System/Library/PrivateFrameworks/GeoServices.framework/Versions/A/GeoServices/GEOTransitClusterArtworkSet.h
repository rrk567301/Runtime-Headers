@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOTransitClusterArtworkSet : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _artworkIndexs;
    NSMutableArray *_artworkItems;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_artworkIndexs : 1; unsigned char read_artworkItems : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long artworkIndexsCount;
@property (readonly, nonatomic) unsigned int *artworkIndexs;
@property (retain, nonatomic) NSMutableArray *artworkItems;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)artworkItemType;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearArtworkIndexs;
- (void)addArtworkIndex:(unsigned int)a0;
- (unsigned int)artworkIndexAtIndex:(unsigned long long)a0;
- (void)setArtworkIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)clearArtworkItems;
- (void)addArtworkItem:(id)a0;
- (unsigned long long)artworkItemsCount;
- (id)artworkItemAtIndex:(unsigned long long)a0;
- (id)_maps_artworkIndicesAsString;

@end
