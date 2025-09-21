@class HDCodableMedicalCodingList, NSMutableArray;

@interface HDCodableInspectableValueCollection : PBCodable <NSCopying> {
    struct { unsigned char collectionType : 1; } _has;
}

@property (nonatomic) BOOL hasCollectionType;
@property (nonatomic) long long collectionType;
@property (retain, nonatomic) NSMutableArray *collections;
@property (readonly, nonatomic) BOOL hasElementTags;
@property (retain, nonatomic) HDCodableMedicalCodingList *elementTags;

+ (Class)collectionType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)collectionsCount;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)clearCollections;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addCollection:(id)a0;
- (id)collectionAtIndex:(unsigned long long)a0;

@end
