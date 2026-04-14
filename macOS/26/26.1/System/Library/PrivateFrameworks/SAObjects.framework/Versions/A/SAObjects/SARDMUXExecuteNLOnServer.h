@class NSString, SAConfidenceScores;

@interface SARDMUXExecuteNLOnServer : SARDExecuteNLOnServer

@property (nonatomic) BOOL markedForHandOff;
@property (nonatomic) BOOL muxStateRollback;
@property (copy, nonatomic) NSString *selectedUserId;
@property (copy, nonatomic) NSString *selectedUserIdentityClassification;
@property (retain, nonatomic) SAConfidenceScores *voiceIDConfidenceScores;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
