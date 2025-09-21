@class NSString, NSMutableArray;

@interface TPPBPolicyIntroducersByCategory : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasCategory;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSMutableArray *introducers;

+ (Class)introducersType;
+ (id)TPPBPolicyIntroducersByCategoryWithCategory:(id)a0 introducers:(id)a1;

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
- (void)addIntroducers:(id)a0;
- (void)clearIntroducers;
- (id)introducersAtIndex:(unsigned long long)a0;
- (unsigned long long)introducersCount;

@end
