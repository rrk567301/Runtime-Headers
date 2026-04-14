@class NSString, NSDictionary;

@interface SASMUXResultCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *rcID;
@property (copy, nonatomic) NSDictionary *resultCandidates;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
