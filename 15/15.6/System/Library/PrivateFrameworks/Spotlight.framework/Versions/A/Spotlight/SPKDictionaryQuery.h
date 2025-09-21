@interface SPKDictionaryQuery : SPKQuery

+ (void)enableDictionary:(char)a0;
+ (char)isQuerySupported:(unsigned long long)a0;
+ (unsigned int)searchDomain;

- (void)start;
- (char)needsIO;
- (char)isDictionaryQuery;

@end
