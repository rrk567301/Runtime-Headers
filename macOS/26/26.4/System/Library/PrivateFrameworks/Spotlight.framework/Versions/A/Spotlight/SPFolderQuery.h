@interface SPFolderQuery : SPKQuery

+ (unsigned int)searchDomain;
+ (int)sourceKind;

- (id)createActivity;
- (void)_start;
- (void)beginQuerySignpostInterval;
- (void)endQuerySignpostInterval;
- (void)queryResponseReceivedSignpostEvent:(id)a0;

@end
