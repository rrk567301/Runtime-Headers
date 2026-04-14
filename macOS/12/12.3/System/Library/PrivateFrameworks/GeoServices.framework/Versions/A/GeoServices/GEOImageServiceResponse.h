@class NSMutableArray;

@interface GEOImageServiceResponse : PBCodable <NSCopying> {
    NSMutableArray *_images;
    unsigned int _height;
    int _status;
    unsigned int _width;
    struct { unsigned char has_height : 1; unsigned char has_status : 1; unsigned char has_width : 1; } _flags;
}

@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSMutableArray *images;

+ (BOOL)isValid:(id)a0;
+ (Class)imagesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)imagesCount;
- (void)clearImages;
- (void)addImages:(id)a0;
- (id)imagesAtIndex:(unsigned long long)a0;

@end
