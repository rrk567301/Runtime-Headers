@interface SPKDictionaryQuery : SPKQuery

+ (void)enableDictionary:(BOOL)a0;
+ (BOOL)isQuerySupported:(unsigned long long)a0;
+ (unsigned int)searchDomain;
+ (int)sourceKind;

- (id)createActivity;
- (void)_start;
- (BOOL)needsIO;
- (BOOL)isDictionaryQuery;

@end
