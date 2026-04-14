@class CKDPSubscription;

@interface CKDPSubscriptionCreateRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasSubscription;
@property (retain, nonatomic) CKDPSubscription *subscription;

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)responseClass;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned int)requestTypeCode;

@end
