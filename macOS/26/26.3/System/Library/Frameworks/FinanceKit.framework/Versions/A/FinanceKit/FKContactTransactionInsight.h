@class NSString;

@interface FKContactTransactionInsight : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *peerPaymentCounterpartHandle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPeerPaymentCounterpartHandle:(id)a0;

@end
