@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
    struct __CFURLEnumerator { } *_enumerator;
    BOOL shouldContinue;
    BOOL isPostOrderDirectory;
}

@property (copy) id /* block */ errorHandler;

- (id)nextObject;
- (id)fileAttributes;
- (unsigned long long)level;
- (id)initWithURL:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2 errorHandler:(id /* block */)a3;
- (void)dealloc;
- (void)skipDescendents;
- (id)directoryAttributes;
- (void)skipDescendants;
- (BOOL)isEnumeratingDirectoryPostOrder;

@end
