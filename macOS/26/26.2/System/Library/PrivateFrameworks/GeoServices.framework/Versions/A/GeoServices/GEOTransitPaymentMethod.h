@class NSString, GEOPBTransitPaymentMethod;

@interface GEOTransitPaymentMethod : NSObject <NSCopying> {
    GEOPBTransitPaymentMethod *_pbPaymentMethod;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) int paymentMethodType;
@property (readonly, nonatomic) int addValueNameType;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPaymentMethod:(id)a0;

@end
