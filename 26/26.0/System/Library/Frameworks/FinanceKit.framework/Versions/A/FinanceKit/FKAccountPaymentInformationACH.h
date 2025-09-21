@class NSString;

@interface FKAccountPaymentInformationACH : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *accountNumber;
@property (readonly, copy, nonatomic) NSString *routingNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountNumber:(id)a0 routingNumber:(id)a1;

@end
