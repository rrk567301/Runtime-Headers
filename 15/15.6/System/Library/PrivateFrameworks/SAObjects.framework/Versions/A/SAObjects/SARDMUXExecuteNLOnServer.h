@class NSString, SAConfidenceScores;

@interface SARDMUXExecuteNLOnServer : SARDExecuteNLOnServer

@property (nonatomic) char markedForHandOff;
@property (nonatomic) char muxStateRollback;
@property (copy, nonatomic) NSString *selectedUserId;
@property (copy, nonatomic) NSString *selectedUserIdentityClassification;
@property (retain, nonatomic) SAConfidenceScores *voiceIDConfidenceScores;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
