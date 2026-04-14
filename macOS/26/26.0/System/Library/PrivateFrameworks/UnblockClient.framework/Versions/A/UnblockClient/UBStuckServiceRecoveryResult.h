@class NSString, UBStuckService, NSArray, UBProcessInfo;

@interface UBStuckServiceRecoveryResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *clientName;
@property long long effectiveness;
@property (retain) NSString *serviceProcessName;
@property (retain) UBStuckService *service;
@property long long recoveryStatus;
@property long long issueType;
@property long long recoveryConfidence;
@property double timeSinceIssueBegan;
@property (retain) NSArray *processesAndThreadsInvolved;
@property (retain) UBProcessInfo *selectedProcess;
@property (retain) NSArray *serviceDependencyChain;
@property long long numThreadsBlockedByThisIssue;
@property long long numThreadsBlockedByOtherIssues;
@property long long numOtherIssues;
@property (retain) NSArray *processesBlockedByThisIssueOnly;
@property (retain) NSArray *processesBlockedByThisAndOtherIssues;
@property (retain) NSArray *processesBlockedByOtherIssuesOnly;
@property (readonly) int pid;
@property (readonly) unsigned long long threadID;

- (id)debugDescription;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)headerDescription;
- (void)_recoveryHadEffectiveness:(long long)a0;
- (id)initWithService:(id)a0 clientName:(id)a1;
- (void)recoveryHadEffectiveness:(long long)a0;

@end
