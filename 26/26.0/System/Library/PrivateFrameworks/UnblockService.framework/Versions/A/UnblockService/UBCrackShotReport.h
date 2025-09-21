@interface UBCrackShotReport : OSACrackShotReport

@property (readonly) long long issueType;

- (id)reportNamePrefix;
- (id)initWithPid:(int)a0 procName:(id)a1 bundleID:(id)a2 exitSnapshot:(struct exit_reason_snapshot { unsigned int x0; unsigned long long x1; unsigned long long x2; } *)a3 reason:(id)a4 issueType:(long long)a5;

@end
