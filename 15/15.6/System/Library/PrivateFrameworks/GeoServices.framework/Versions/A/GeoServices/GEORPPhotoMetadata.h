@class NSString, GEOLocation, PBDataReader;

@interface GEORPPhotoMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_clientImageUuid;
    NSString *_deviceLensMake;
    NSString *_deviceLensModel;
    GEOLocation *_geotag;
    NSString *_imageDescription;
    NSString *_mediaType;
    unsigned long long _size;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _source;
    struct { unsigned char has_size : 1; unsigned char has_source : 1; unsigned char read_clientImageUuid : 1; unsigned char read_deviceLensMake : 1; unsigned char read_deviceLensModel : 1; unsigned char read_geotag : 1; unsigned char read_imageDescription : 1; unsigned char read_mediaType : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasClientImageUuid;
@property (retain, nonatomic) NSString *clientImageUuid;
@property (readonly, nonatomic) char hasImageDescription;
@property (retain, nonatomic) NSString *imageDescription;
@property (readonly, nonatomic) char hasGeotag;
@property (retain, nonatomic) GEOLocation *geotag;
@property (nonatomic) char hasSize;
@property (nonatomic) unsigned long long size;
@property (readonly, nonatomic) char hasMediaType;
@property (retain, nonatomic) NSString *mediaType;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (readonly, nonatomic) char hasDeviceLensMake;
@property (retain, nonatomic) NSString *deviceLensMake;
@property (readonly, nonatomic) char hasDeviceLensModel;
@property (retain, nonatomic) NSString *deviceLensModel;

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
- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
