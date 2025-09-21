@class NSMutableArray;

@interface ATXPBFaceGallerySection : PBCodable <NSCopying> {
    struct { unsigned char semanticType : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) char hasSemanticType;
@property (nonatomic) int semanticType;

+ (Class)itemsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addItems:(id)a0;
- (unsigned long long)itemsCount;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)a0;
- (int)StringAsSemanticType:(id)a0;
- (id)semanticTypeAsString:(int)a0;

@end
