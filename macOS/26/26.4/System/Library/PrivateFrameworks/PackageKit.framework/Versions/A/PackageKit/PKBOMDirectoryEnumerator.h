@class PKBOM;

@interface PKBOMDirectoryEnumerator : NSDirectoryEnumerator {
    PKBOM *_pkBom;
    struct _BOMBomEnumerator { } *_be;
    struct _BOMFSObject { } *_currentFSO;
}

- (void)skipDescendants;
- (BOOL)isDirectory;
- (void)skipDescendents;
- (id)fileAttributes;
- (void)dealloc;
- (id)nextObject;
- (id)initWithBOM:(id)a0;

@end
