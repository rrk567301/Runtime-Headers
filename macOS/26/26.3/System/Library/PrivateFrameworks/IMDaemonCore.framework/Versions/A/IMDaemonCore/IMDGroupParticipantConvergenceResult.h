@class NSArray;

@interface IMDGroupParticipantConvergenceResult : NSObject

@property (readonly, nonatomic) NSArray *memberStatusChanges;
@property (readonly, nonatomic) NSArray *chatStatusChanges;

+ (id)groupParticipantConvergenceResultForUpdateType:(unsigned long long)a0 context:(id)a1;

- (void).cxx_destruct;
- (id)initWithMemberStatusChanges:(id)a0 chatStatusChanges:(id)a1;

@end
