@class NSString;

@interface SALocalSearchAnswerRerouteSuggestion : SADomainCommand

@property (copy, nonatomic) NSString *response;

+ (id)answerRerouteSuggestion;
+ (id)answerRerouteSuggestionWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
