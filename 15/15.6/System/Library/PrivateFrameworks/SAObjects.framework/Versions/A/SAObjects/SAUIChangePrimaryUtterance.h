@class NSString;

@interface SAUIChangePrimaryUtterance : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *speechRecognitionId;
@property (nonatomic) long long utteranceIndex;

+ (id)changePrimaryUtterance;
+ (id)changePrimaryUtteranceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
