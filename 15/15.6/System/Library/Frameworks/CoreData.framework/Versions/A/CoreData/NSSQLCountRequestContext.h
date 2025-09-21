@interface NSSQLCountRequestContext : NSSQLFetchRequestContext

- (id)_createStatement;
- (char)executeRequestCore:(id *)a0;

@end
