@class NSMutableArray;

@interface CKDPSubscriptionRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *subscriptions;

+ (Class)subscriptionsType;

- (unsigned long long)subscriptionsCount;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (id)subscriptionsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)addSubscriptions:(id)a0;
- (void).cxx_destruct;
- (void)clearSubscriptions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
