@class CTLazuliMessageIDList;

@interface CTXPCRetrieveAllMessagesResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTLazuliMessageIDList *messageIDList;

+ (id)allowedClassesForArguments;
+ (BOOL)isSensitiveMessage;

- (id)ct_shortName;
- (id)initWithMessageIDList:(id)a0;

@end
