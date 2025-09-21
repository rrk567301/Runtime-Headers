@class NSNumber;

@interface SASStartAsrOnServerRequest : SASStartSpeechRequest

@property (copy, nonatomic) NSNumber *runCamFtm;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
