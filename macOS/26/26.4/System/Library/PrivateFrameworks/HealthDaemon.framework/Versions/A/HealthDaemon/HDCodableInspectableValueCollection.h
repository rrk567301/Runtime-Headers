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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearCollections;
- (void)mergeFrom:(id)a0;
- (unsigned long long)collectionsCount;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addCollection:(id)a0;
- (id)collectionAtIndex:(unsigned long long)a0;

@end
