@class NSString, PBDataReader;

@interface GEORPPhotoAttributionPreferences : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_attributionName;
    NSString *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _attributePhotos;
    char _wasCleared;
    struct { unsigned char has_attributePhotos : 1; unsigned char has_wasCleared : 1; unsigned char read_attributionName : 1; unsigned char read_version : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasVersion;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) char hasAttributePhotos;
@property (nonatomic) char attributePhotos;
@property (readonly, nonatomic) char hasAttributionName;
@property (retain, nonatomic) NSString *attributionName;
@property (nonatomic) char hasWasCleared;
@property (nonatomic) char wasCleared;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
