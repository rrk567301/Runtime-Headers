@class NSString, NSDictionary;

@interface SASMUXResultCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *rcID;
@property (copy, nonatomic) NSDictionary *resultCandidates;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
