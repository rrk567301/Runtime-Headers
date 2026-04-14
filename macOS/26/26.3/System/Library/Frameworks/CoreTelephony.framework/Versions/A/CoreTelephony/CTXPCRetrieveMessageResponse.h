@class CTLazuliMessageEnvelope;

@interface CTXPCRetrieveMessageResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTLazuliMessageEnvelope *messageEnvelope;

+ (id)allowedClassesForArguments;
+ (BOOL)isSensitiveMessage;

- (id)ct_shortName;
- (id)initWithMessageEnvelope:(id)a0;

@end
