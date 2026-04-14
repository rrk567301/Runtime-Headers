@class FKAccountPaymentInformationACH, NSString, FKAccountPaymentInformationSCAN;

@interface FKAccountPaymentInformation : NSObject <NSCopying>

@property (readonly, copy, nonatomic) FKAccountPaymentInformationACH *ach;
@property (readonly, copy, nonatomic) FKAccountPaymentInformationSCAN *scan;
@property (readonly, copy, nonatomic) NSString *iban;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountNumber:(id)a0 sortCode:(id)a1;
- (id)initWithAccountNumber:(id)a0 routingNumber:(id)a1;
- (id)initWithIBAN:(id)a0;

@end
