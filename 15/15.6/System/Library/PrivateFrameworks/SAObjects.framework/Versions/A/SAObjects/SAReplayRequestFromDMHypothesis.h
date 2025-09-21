@class NSData;

@interface SAReplayRequestFromDMHypothesis : SAStartRequest

@property (copy, nonatomic) NSData *dmHypothesis;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
