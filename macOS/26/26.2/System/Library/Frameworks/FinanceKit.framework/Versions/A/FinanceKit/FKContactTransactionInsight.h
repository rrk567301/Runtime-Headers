@class NSString;

@interface FKContactTransactionInsight : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *peerPaymentCounterpartHandle;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPeerPaymentCounterpartHandle:(id)a0;

@end
