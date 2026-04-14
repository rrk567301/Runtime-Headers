@class NSString;

@interface FKContactTransactionInsight : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *peerPaymentCounterpartHandle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPeerPaymentCounterpartHandle:(id)a0;

@end
