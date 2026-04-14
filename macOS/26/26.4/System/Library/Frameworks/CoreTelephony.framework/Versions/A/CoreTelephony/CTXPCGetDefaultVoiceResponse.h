@class CTXPCServiceSubscriptionContext;

@interface CTXPCGetDefaultVoiceResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *context;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithContext:(id)a0;

@end
