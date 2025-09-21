@class PBDataReader, GEORPCuratedCollectionCorrections, GEORPCuratedCollectionContext, PBUnknownFields;

@interface GEORPCuratedCollectionFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPCuratedCollectionContext *_curatedCollectionContext;
    GEORPCuratedCollectionCorrections *_curatedCollectionCorrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_curatedCollectionContext : 1; unsigned char read_curatedCollectionCorrections : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasCuratedCollectionContext;
@property (retain, nonatomic) GEORPCuratedCollectionContext *curatedCollectionContext;
@property (readonly, nonatomic) char hasCuratedCollectionCorrections;
@property (retain, nonatomic) GEORPCuratedCollectionCorrections *curatedCollectionCorrections;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
