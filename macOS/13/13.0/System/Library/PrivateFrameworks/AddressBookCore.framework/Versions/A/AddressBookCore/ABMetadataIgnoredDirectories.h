@class NSCountedSet;

@interface ABMetadataIgnoredDirectories : NSObject {
    NSCountedSet *_ignoredDirectories;
}

- (id)init;
- (void).cxx_destruct;
- (void)runWithIgnoredDirectory:(id)a0 block:(id /* block */)a1;
- (void)addDirectory:(id)a0;
- (void)removeDirectory:(id)a0;
- (BOOL)shouldIngoreDirectory:(id)a0;

@end
