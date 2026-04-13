@class NSMutableArray;

@interface GEOJunctionViewGuidanceFeedback : PBCodable <NSCopying> {
    NSMutableArray *_imageIDs;
    BOOL _imageDisplayed;
    struct { unsigned char has_imageDisplayed : 1; } _flags;
}

@property (nonatomic) BOOL hasImageDisplayed;
@property (nonatomic) BOOL imageDisplayed;
@property (retain, nonatomic) NSMutableArray *imageIDs;

+ (BOOL)isValid:(id)a0;
+ (Class)imageIDType;

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
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)addImageID:(id)a0;
- (unsigned long long)imageIDsCount;
- (void)clearImageIDs;
- (id)imageIDAtIndex:(unsigned long long)a0;

@end
