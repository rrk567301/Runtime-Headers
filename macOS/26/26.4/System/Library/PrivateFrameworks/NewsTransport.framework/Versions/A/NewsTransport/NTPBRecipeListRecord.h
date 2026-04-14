@class NSMutableArray, NTPBRecordBase;

@interface NTPBRecipeListRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (retain, nonatomic) NSMutableArray *recipeIDs;

+ (Class)recipeIDsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (void)addRecipeIDs:(id)a0;
- (void)clearRecipeIDs;
- (id)recipeIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)recipeIDsCount;

@end
