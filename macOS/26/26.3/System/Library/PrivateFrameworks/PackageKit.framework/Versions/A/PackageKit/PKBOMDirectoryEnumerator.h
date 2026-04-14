@class PKBOM;

@interface PKBOMDirectoryEnumerator : NSDirectoryEnumerator {
    PKBOM *_pkBom;
    struct _BOMBomEnumerator { } *_be;
    struct _BOMFSObject { } *_currentFSO;
}

- (id)nextObject;
- (BOOL)isDirectory;
- (void)skipDescendents;
- (void)dealloc;
- (id)fileAttributes;
- (void)skipDescendants;
- (id)initWithBOM:(id)a0;

@end
