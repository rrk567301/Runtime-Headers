@class NSMutableArray;

@interface CKDPSubscriptionRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *subscriptions;

+ (Class)subscriptionsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)subscriptionsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addSubscriptions:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)subscriptionsCount;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)clearSubscriptions;

@end
