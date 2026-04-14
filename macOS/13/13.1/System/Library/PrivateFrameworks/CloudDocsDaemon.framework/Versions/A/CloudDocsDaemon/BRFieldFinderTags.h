@class NSMutableArray;

@interface BRFieldFinderTags : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *tags;

+ (Class)tagsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearTags;
- (unsigned long long)tagsCount;
- (void)addTags:(id)a0;
- (id)tagsAtIndex:(unsigned long long)a0;

@end
