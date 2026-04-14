@class NSString, NSDictionary;

@interface SASMUXResultCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *rcID;
@property (copy, nonatomic) NSDictionary *resultCandidates;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
