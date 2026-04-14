@class NSMutableArray;

@interface CKDPSubscriptionRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *subscriptions;

+ (Class)subscriptionsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearSubscriptions;
- (id)dictionaryRepresentation;
- (id)subscriptionsAtIndex:(unsigned long long)a0;
- (void)addSubscriptions:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)subscriptionsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
