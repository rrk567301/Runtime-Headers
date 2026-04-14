@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
    struct __CFURLEnumerator { } *_enumerator;
    BOOL shouldContinue;
    BOOL isPostOrderDirectory;
}

@property (copy) id /* block */ errorHandler;

- (unsigned long long)level;
- (void)dealloc;
- (id)nextObject;
- (id)directoryAttributes;
- (BOOL)isEnumeratingDirectoryPostOrder;
- (id)initWithURL:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2 errorHandler:(id /* block */)a3;
- (void)skipDescendents;
- (void)skipDescendants;
- (id)fileAttributes;

@end
