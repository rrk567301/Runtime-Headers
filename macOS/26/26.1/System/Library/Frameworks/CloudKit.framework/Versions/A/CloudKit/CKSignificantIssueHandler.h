@interface CKSignificantIssueHandler : NSObject

@property (class, readonly) CKSignificantIssueHandler *currentHandler;

- (void)handleSignificantIssue:(id)a0 actions:(unsigned long long)a1;

@end
