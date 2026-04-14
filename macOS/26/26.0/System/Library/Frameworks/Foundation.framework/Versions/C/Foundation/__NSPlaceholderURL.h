@interface __NSPlaceholderURL : NSURL

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (id)initWithString:(id)a0;
- (oneway void)release;
- (id)initFileURLWithPath:(id)a0;
- (id)initFileURLWithFileSystemRepresentation:(const char *)a0 isDirectory:(BOOL)a1 relativeToURL:(id)a2;
- (id)initFileURLWithPath:(id)a0 isDirectory:(BOOL)a1;
- (id)initFileURLWithPath:(id)a0 isDirectory:(BOOL)a1 relativeToURL:(id)a2;
- (id)_initFileURLWithPath:(id)a0 cachingResourceValuesForKeys:(id)a1 error:(id *)a2;
- (id)initAbsoluteURLWithDataRepresentation:(id)a0 relativeToURL:(id)a1;
- (id)initByResolvingAliasFileAtURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initByResolvingBookmarkData:(id)a0 options:(unsigned long long)a1 relativeToURL:(id)a2 bookmarkDataIsStale:(BOOL *)a3 error:(id *)a4;
- (id)initFileURLWithPath:(id)a0 relativeToURL:(id)a1;
- (id)initWithDataRepresentation:(id)a0 relativeToURL:(id)a1;
- (id)initWithScheme:(id)a0 host:(id)a1 path:(id)a2;
- (id)initWithString:(id)a0 encodingInvalidCharacters:(BOOL)a1;
- (id)initWithString:(id)a0 relativeToURL:(id)a1 encodingInvalidCharacters:(BOOL)a2;

@end
