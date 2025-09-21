@class NSMutableArray;

@interface GEOImageServiceResponse : PBCodable <NSCopying> {
    NSMutableArray *_images;
    unsigned int _height;
    int _status;
    unsigned int _width;
    struct { unsigned char has_height : 1; unsigned char has_status : 1; unsigned char has_width : 1; } _flags;
}

@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) char hasHeight;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSMutableArray *images;

+ (Class)imagesType;
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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (void)addImages:(id)a0;
- (void)clearImages;
- (id)imagesAtIndex:(unsigned long long)a0;
- (unsigned long long)imagesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
