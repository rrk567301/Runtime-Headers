@class NSString;

@interface CTXPCMobileSubscriberISOSubregionCodeRequest : CTXPCRequestMessage

@property (readonly, nonatomic) NSString *mcc;
@property (readonly, nonatomic) NSString *mnc;

- (id)ct_shortName;
- (int)requiredEntitlement;
- (id)initWithMcc:(id)a0 mnc:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
