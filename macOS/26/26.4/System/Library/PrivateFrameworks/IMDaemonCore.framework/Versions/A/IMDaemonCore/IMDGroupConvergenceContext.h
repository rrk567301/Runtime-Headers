@class NSString, NSArray, NSDictionary, IMDAccount;

@interface IMDGroupConvergenceContext : NSObject

@property (retain, nonatomic) NSString *chatIdentifier;
@property (nonatomic) unsigned char chatStyle;
@property (retain, nonatomic) NSArray *currentParticipants;
@property (nonatomic) BOOL isBlackholed;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSArray *toParticipants;
@property (retain, nonatomic) NSArray *participantsToAdd;
@property (retain, nonatomic) NSArray *participantsToRemove;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSDictionary *participantChangeGUIDs;
@property (retain, nonatomic) NSString *toIdentifier;
@property (retain, nonatomic) NSString *fromIdentifier;
@property (nonatomic) BOOL isReflection;
@property (nonatomic) BOOL allowSelfRemoval;
@property (retain, nonatomic) IMDAccount *account;

- (void).cxx_destruct;
- (id)initWithChat:(id)a0;
- (id)_messageIDForUpdateType:(unsigned long long)a0 participant:(id)a1;
- (id)chatStatusChangeContextForUpdateType:(unsigned long long)a0 participant:(id)a1;
- (id)memberStatusChangeContextForUpdateType:(unsigned long long)a0 participant:(id)a1;

@end
