@class NSString, NSDictionary;

@interface NFECommercePaymentSession : NFSession <NFECommercePaymentSessionCallbacks> {
    NSDictionary *_appletsById;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)performECommercePayment:(id)a0 request:(id)a1 error:(id *)a2;
- (id)allApplets;
- (id)appletWithIdentifier:(id)a0;
- (void)didStartSession:(id)a0;
- (id)performECommercePayment:(id)a0 request:(id)a1;

@end
