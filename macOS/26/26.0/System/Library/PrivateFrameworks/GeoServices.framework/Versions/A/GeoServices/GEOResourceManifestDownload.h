@class PBDataReader, GEODownloadMetadata, GEOResources, PBUnknownFields;

@interface GEOResourceManifestDownload : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEODownloadMetadata *_metadata;
    GEOResources *_osImageResources;
    GEOResources *_resources;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_metadata : 1; unsigned char read_osImageResources : 1; unsigned char read_resources : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasResources;
@property (retain, nonatomic) GEOResources *resources;
@property (readonly, nonatomic) BOOL hasOsImageResources;
@property (retain, nonatomic) GEOResources *osImageResources;
@property (retain, nonatomic) GEODownloadMetadata *metadata;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)copyTo:(id)a0;
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
- (id)initWithResourceManifestData:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
