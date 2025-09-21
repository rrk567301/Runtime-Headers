@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
    struct __CFURLEnumerator { } *_enumerator;
    char shouldContinue;
    char isPostOrderDirectory;
}

@property (copy) id /* block */ errorHandler;

- (void)dealloc;
- (id)nextObject;
- (unsigned long long)level;
- (char)isEnumeratingDirectoryPostOrder;
- (void)skipDescendants;
- (void)skipDescendents;
- (id)directoryAttributes;
- (id)fileAttributes;
- (id)initWithURL:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2 errorHandler:(id /* block */)a3;

@end
