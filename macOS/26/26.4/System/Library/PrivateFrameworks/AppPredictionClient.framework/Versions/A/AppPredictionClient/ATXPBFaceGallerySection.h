@class NSMutableArray;

@interface ATXPBFaceGallerySection : PBCodable <NSCopying> {
    struct { unsigned char semanticType : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL hasSemanticType;
@property (nonatomic) int semanticType;

+ (Class)itemsType;

- (id)itemsAtIndex:(unsigned long long)a0;
- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)typeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)itemsCount;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)clearItems;
- (void)writeTo:(id)a0;
- (void)addItems:(id)a0;
- (int)StringAsSemanticType:(id)a0;
- (id)semanticTypeAsString:(int)a0;

@end
