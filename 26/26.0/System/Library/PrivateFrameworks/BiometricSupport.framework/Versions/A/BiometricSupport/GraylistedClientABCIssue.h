@interface GraylistedClientABCIssue : EntitlementABCIssue

+ (void)reportClient:(id)a0 withProcessName:(id)a1 clientUUID:(id)a2 platform:(id)a3 forReporter:(id)a4;

- (id)tag;
- (id)context;
- (unsigned long long)abcReason;

@end
