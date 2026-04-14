@class NSMutableArray;

@interface CKDPSubscriptionRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *subscriptions;

+ (Class)subscriptionsType;

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
- (void)clearSubscriptions;
- (void)addSubscriptions:(id)a0;
- (unsigned long long)subscriptionsCount;
- (id)subscriptionsAtIndex:(unsigned long long)a0;

@end
