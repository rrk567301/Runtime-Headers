@class NSString, NSMutableArray;

@interface PersonLinkingLinkedPairEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserID;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSMutableArray *pairs;

+ (Class)pairsType;

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
- (void)addPairs:(id)a0;
- (void)clearPairs;
- (id)pairsAtIndex:(unsigned long long)a0;
- (unsigned long long)pairsCount;

@end
