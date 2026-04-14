@class NSArray, NSString, SASRecognition;

@interface SAUIRevealRecognizedSpeech : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *asrAlternatives;
@property (copy, nonatomic) NSString *overriddenSpeech;
@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *speechRecognizedAceId;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
