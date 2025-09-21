@class CTLazuliMessageIDList;

@interface CTXPCRetrieveAllMessagesResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTLazuliMessageIDList *messageIDList;

+ (id)allowedClassesForArguments;
+ (char)isSensitiveMessage;

- (id)initWithMessageIDList:(id)a0;

@end
