@class NSArray, NSString, SARDServerContextUpdateCandidate;

@interface SARDFlowOutputCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *payload;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (retain, nonatomic) SARDServerContextUpdateCandidate *serverContextUpdateCandidate;
@property (nonatomic) char shouldNotMitigateAsFalseTrigger;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
