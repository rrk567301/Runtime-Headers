@interface SPKDictionaryQuery : SPKQuery

+ (unsigned int)searchDomain;
+ (BOOL)isQuerySupported:(unsigned long long)a0;
+ (void)enableDictionary:(BOOL)a0;

- (void)start;
- (BOOL)needsIO;
- (BOOL)isDictionaryQuery;

@end
