@class NSNumber;

@interface SASStartAsrOnServerRequest : SASStartSpeechRequest

@property (copy, nonatomic) NSNumber *runCamFtm;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
