@class NSString, PBUnknownFields;

@interface GEOPhotoInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_url;
    int _size;
    struct { unsigned char has_size : 1; } _flags;
}

@property (nonatomic) char hasSize;
@property (nonatomic) int size;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

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
- (int)StringAsSize:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithPlaceDataPhotoContent:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)sizeAsString:(int)a0;

@end
