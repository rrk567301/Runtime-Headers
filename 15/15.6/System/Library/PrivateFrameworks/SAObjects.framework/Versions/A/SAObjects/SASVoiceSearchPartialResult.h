@class NSString, NSArray;

@interface SASVoiceSearchPartialResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *recognitionText;
@property (nonatomic) char stable;
@property (copy, nonatomic) NSArray *voiceSearchResults;

+ (id)voiceSearchPartialResult;
+ (id)voiceSearchPartialResultWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
