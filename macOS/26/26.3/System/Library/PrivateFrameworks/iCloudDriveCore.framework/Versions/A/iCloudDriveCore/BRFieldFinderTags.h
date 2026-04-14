@class NSMutableArray;

@interface BRFieldFinderTags : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *tags;

+ (Class)tagsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)clearTags;
- (unsigned long long)tagsCount;
- (void)addTags:(id)a0;
- (id)tagsAtIndex:(unsigned long long)a0;

@end
