@interface LSPlugInQueryAll : LSPlugInQuery

- (char)_remoteResolutionIsExpensive;
- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)a0 error:(id *)a1;

@end
