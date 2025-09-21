@interface FCModifyIssueHistoryCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)recordZoneName;
- (id)initWithIssueHistoryItems:(id)a0 merge:(char)a1;
- (char)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
