@class NSString, NSArray, AXAuditCategoryResult, NSMutableArray;

@interface AXAuditCaseResult : AXAuditTimedResult

@property (retain, nonatomic) NSMutableArray *_mutableIssues;
@property (copy, nonatomic) NSString *caseTitle;
@property (retain, nonatomic) NSArray *auditIssues;
@property (weak, nonatomic) AXAuditCategoryResult *result;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)addAuditIssue:(id)a0;

@end
