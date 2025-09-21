@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject {
    NSArray *_merchantIdentifiers;
}

@property (readonly, nonatomic) char ignoreMerchantIdentifiers;
@property (readonly, nonatomic) char hasMerchantIdentifiers;

- (void).cxx_destruct;
- (id)initWithToken:(struct { unsigned int x0[8]; })a0;
- (void)_probeEntitlementsWithToken:(struct { unsigned int x0[8]; })a0;
- (char)hasMerchantIdentifier:(id)a0;

@end
