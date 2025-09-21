@class NSMutableArray;

@interface GEOJunctionViewGuidanceFeedback : PBCodable <NSCopying> {
    NSMutableArray *_imageIDs;
    char _imageDisplayed;
    struct { unsigned char has_imageDisplayed : 1; } _flags;
}

@property (nonatomic) char hasImageDisplayed;
@property (nonatomic) char imageDisplayed;
@property (retain, nonatomic) NSMutableArray *imageIDs;

+ (Class)imageIDType;
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
- (id)imageIDAtIndex:(unsigned long long)a0;
- (void)addImageID:(id)a0;
- (void)clearImageIDs;
- (unsigned long long)imageIDsCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
