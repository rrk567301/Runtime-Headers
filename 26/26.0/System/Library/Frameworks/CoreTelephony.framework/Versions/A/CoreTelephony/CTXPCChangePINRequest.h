@class NSString;

@interface CTXPCChangePINRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) NSString *currentPin;
@property (readonly, nonatomic) NSString *updatedPin;

- (id)ct_shortName;
- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 currentPin:(id)a1 updatedPin:(id)a2;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
