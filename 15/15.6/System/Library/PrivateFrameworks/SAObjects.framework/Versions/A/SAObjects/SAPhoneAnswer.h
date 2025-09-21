@interface SAPhoneAnswer : SABaseClientBoundCommand

@property (nonatomic) char videoAllowed;

+ (id)answer;
+ (id)answerWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
