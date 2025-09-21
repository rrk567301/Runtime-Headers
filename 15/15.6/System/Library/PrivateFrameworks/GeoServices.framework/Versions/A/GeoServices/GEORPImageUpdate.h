@class NSString, NSData, GEORPPhotoMetadata, PBDataReader;

@interface GEORPImageUpdate : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_imageId;
    GEORPPhotoMetadata *_photoMetadata;
    NSData *_uploadResponse;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _action;
    struct { unsigned char has_action : 1; unsigned char read_imageId : 1; unsigned char read_photoMetadata : 1; unsigned char read_uploadResponse : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasImageId;
@property (retain, nonatomic) NSString *imageId;
@property (readonly, nonatomic) char hasUploadResponse;
@property (retain, nonatomic) NSData *uploadResponse;
@property (nonatomic) char hasAction;
@property (nonatomic) int action;
@property (readonly, nonatomic) char hasPhotoMetadata;
@property (retain, nonatomic) GEORPPhotoMetadata *photoMetadata;

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
- (id)actionAsString:(int)a0;
- (void)copyTo:(id)a0;
- (int)StringAsAction:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
