@class NSString, NSMutableArray;

@interface TPPBPolicyIntroducersByCategory : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSMutableArray *introducers;

+ (Class)introducersType;
+ (id)TPPBPolicyIntroducersByCategoryWithCategory:(id)a0 introducers:(id)a1;

- (unsigned long long)introducersCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearIntroducers;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addIntroducers:(id)a0;
- (id)introducersAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
