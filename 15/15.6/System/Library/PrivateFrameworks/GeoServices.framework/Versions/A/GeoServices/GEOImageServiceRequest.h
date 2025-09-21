@class NSMutableArray;

@interface GEOImageServiceRequest : PBRequest <NSCopying> {
    NSMutableArray *_imageIds;
    unsigned int _height;
    unsigned int _width;
    struct { unsigned char has_height : 1; unsigned char has_width : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *imageIds;
@property (nonatomic) char hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) char hasHeight;
@property (nonatomic) unsigned int height;

+ (Class)imageIdType;
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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)imageIdAtIndex:(unsigned long long)a0;
- (void)addImageId:(id)a0;
- (void)clearImageIds;
- (unsigned long long)imageIdsCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
