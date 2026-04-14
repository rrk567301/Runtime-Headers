@class NSMutableArray;

@interface BRFieldFinderTags : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *tags;

+ (Class)tagsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearTags;
- (unsigned long long)tagsCount;
- (void)addTags:(id)a0;
- (id)tagsAtIndex:(unsigned long long)a0;

@end
