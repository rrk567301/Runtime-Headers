@class SASmsSms;

@interface SAUIShowSmsMessage : SAUISnippet

@property (nonatomic) char showAsDraft;
@property (retain, nonatomic) SASmsSms *sms;

+ (id)showSmsMessage;
+ (id)showSmsMessageWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
