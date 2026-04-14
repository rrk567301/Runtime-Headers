@class NSMutableArray;

@interface GEOImageServiceRequest : PBRequest <NSCopying> {
    NSMutableArray *_imageIds;
    unsigned int _height;
    unsigned int _width;
    struct { unsigned char has_height : 1; unsigned char has_width : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *imageIds;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) unsigned int height;

+ (BOOL)isValid:(id)a0;
+ (Class)imageIdType;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (Class)responseClass;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (unsigned int)requestTypeCode;
- (id)imageIdAtIndex:(unsigned long long)a0;
- (void)addImageId:(id)a0;
- (void)clearImageIds;
- (unsigned long long)imageIdsCount;

@end
