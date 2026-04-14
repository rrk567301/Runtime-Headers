@interface SPURLQuery : SPKQuery

+ (unsigned int)searchDomain;
+ (int)sourceKind;

- (id)createActivity;
- (void)_start;
- (BOOL)isURLQuery;

@end
