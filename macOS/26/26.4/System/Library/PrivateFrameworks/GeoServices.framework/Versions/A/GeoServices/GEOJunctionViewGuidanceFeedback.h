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

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (id)imageIDAtIndex:(unsigned long long)a0;
- (void)addImageID:(id)a0;
- (void)clearImageIDs;
- (unsigned long long)imageIDsCount;

@end
