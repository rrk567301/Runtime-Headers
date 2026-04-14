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

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)imageIDAtIndex:(unsigned long long)a0;
- (void)addImageID:(id)a0;
- (void)clearImageIDs;
- (unsigned long long)imageIDsCount;

@end
