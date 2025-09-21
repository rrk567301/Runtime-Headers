@interface FCModifySubscriptionsCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithSubscriptions:(id)a0 merge:(char)a1;
- (char)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
