@class PBDataReader, GEOPDEmbeddingModelMetadata, PBUnknownFields;

@interface GEOPDEmbedding : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { float *list; unsigned long long count; unsigned long long size; } _embeddings;
    GEOPDEmbeddingModelMetadata *_modelMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _source;
    struct { unsigned char has_source : 1; unsigned char read_unknownFields : 1; unsigned char read_embeddings : 1; unsigned char read_modelMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long embeddingsCount;
@property (readonly, nonatomic) float *embeddings;
@property (readonly, nonatomic) BOOL hasModelMetadata;
@property (retain, nonatomic) GEOPDEmbeddingModelMetadata *modelMetadata;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)sourceAsString:(int)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSource:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearEmbeddings;
- (void)addEmbedding:(float)a0;
- (float)embeddingAtIndex:(unsigned long long)a0;
- (void)setEmbeddings:(float *)a0 count:(unsigned long long)a1;

@end
