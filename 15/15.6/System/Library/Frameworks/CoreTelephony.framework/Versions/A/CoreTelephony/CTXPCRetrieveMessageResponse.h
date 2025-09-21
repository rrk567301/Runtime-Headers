@class CTLazuliMessageEnvelope;

@interface CTXPCRetrieveMessageResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTLazuliMessageEnvelope *messageEnvelope;

+ (id)allowedClassesForArguments;
+ (char)isSensitiveMessage;

- (id)initWithMessageEnvelope:(id)a0;

@end
