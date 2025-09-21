@class NSDictionary;

@interface SASMultilingualSpeechRecognized : SABaseClientBoundCommand

@property (nonatomic) char multilingualDisabled;
@property (copy, nonatomic) NSDictionary *speechRecognizedByLanguage;

+ (id)multilingualSpeechRecognized;
+ (id)multilingualSpeechRecognizedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
