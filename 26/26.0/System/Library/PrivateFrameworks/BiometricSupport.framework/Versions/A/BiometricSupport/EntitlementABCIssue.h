@class NSString, NSDate, EntitlementABCIssueReporter;

@interface EntitlementABCIssue : NSObject

@property (retain, nonatomic) EntitlementABCIssueReporter *reporter;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSString *clientUUID;
@property (retain, nonatomic) NSString *platform;
@property (nonatomic) unsigned long long reportCounter;
@property (retain, nonatomic) NSDate *nextAction;

- (id)tag;
- (void)report;
- (id)context;
- (void).cxx_destruct;
- (unsigned long long)abcReason;
- (void)handleABCResult:(int)a0;
- (id)initWithClient:(id)a0 processName:(id)a1 clientUUID:(id)a2 platform:(id)a3 forReporter:(id)a4;
- (BOOL)isFinalResult:(int)a0;
- (void)reportIfNeeded;
- (BOOL)shouldBeReportedNow;

@end
