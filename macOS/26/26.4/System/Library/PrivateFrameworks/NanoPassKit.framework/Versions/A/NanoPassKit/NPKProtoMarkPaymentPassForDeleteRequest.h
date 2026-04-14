@class NSString, NSMutableArray;

@interface NPKProtoMarkPaymentPassForDeleteRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *paymentApplicationAIDs;

+ (Class)paymentApplicationAIDsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addPaymentApplicationAIDs:(id)a0;
- (void)clearPaymentApplicationAIDs;
- (id)paymentApplicationAIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)paymentApplicationAIDsCount;

@end
