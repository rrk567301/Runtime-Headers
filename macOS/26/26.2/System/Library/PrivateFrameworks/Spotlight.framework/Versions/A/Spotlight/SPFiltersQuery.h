@interface SPFiltersQuery : SPKQuery

+ (unsigned int)searchDomain;

- (void)start;
- (BOOL)shouldReturnEarly;

@end
