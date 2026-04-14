@interface IFPathMapper : NSObject {
    struct PathMapping { char *x0; char *x1; int x2; struct PathMapping *x3; } *firstPathMapping;
    char lastLookupResult[1024];
}

- (id)init;
- (void)dealloc;
- (id)referencePathWithTokenizedPath:(id)a0;
- (id)tokenizedPathWithReferencePath:(id)a0;
- (id)allTokenizedPathRoots;
- (void)loadPathMappings:(id)a0;
- (void)loadPathMappingsFromTokensDictionary:(id)a0;
- (const char *)referencePathWithTokenizedPathUTF8:(const char *)a0;
- (const char *)tokenizedPathWithReferencePathUTF8:(const char *)a0;

@end
