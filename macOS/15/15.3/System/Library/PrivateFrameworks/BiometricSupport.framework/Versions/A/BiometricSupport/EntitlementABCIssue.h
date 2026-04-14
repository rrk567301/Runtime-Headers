@class NSString, NSDate, EntitlementABCIssueReporter;

@interface EntitlementABCIssue : NSObject

@property (retain, nonatomic) EntitlementABCIssueReporter *reporter;
@property (retain, nonatomic) NSString *clientName;
@property (nonatomic) unsigned long long reportCounter;
@property (retain, nonatomic) NSDate *nextAction;

- (void).cxx_destruct;
- (id)context;
- (id)tag;
- (void)report;
- (unsigned long long)abcReason;
- (void)handleABCResult:(int)a0;
- (id)initWithClient:(id)a0 forReporter:(id)a1;
- (BOOL)isFinalResult:(int)a0;
- (void)reportIfNeeded;
- (BOOL)shouldBeReportedNow;

@end
