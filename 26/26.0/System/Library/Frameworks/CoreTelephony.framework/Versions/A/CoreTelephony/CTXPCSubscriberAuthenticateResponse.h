@class CTSubscriberAuthDataHolder;

@interface CTXPCSubscriberAuthenticateResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTSubscriberAuthDataHolder *authInfo;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithAuthInfo:(id)a0;

@end
