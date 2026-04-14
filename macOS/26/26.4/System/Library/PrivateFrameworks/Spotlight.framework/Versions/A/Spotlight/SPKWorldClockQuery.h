@interface SPKWorldClockQuery : SPKQuery

+ (BOOL)isQuerySupported:(unsigned long long)a0;
+ (unsigned int)searchDomain;
+ (int)sourceKind;

- (id)createActivity;
- (void)_start;

@end
