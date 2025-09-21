@class NSString, NSArray, NSFileAttributes;

@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {
    NSString *path;
    NSArray *contents;
    unsigned long long idx;
    NSString *prepend;
    NSAllDescendantPathsEnumerator *under;
    NSFileAttributes *directoryAttributes;
    NSString *pathToLastReportedItem;
    unsigned long long depth;
    char cross;
    char _padding[3];
}

+ (id)newWithPath:(id)a0 prepend:(id)a1 attributes:(id)a2 cross:(char)a3 depth:(unsigned long long)a4;

- (void)dealloc;
- (id)nextObject;
- (unsigned long long)level;
- (char)isEnumeratingDirectoryPostOrder;
- (void)skipDescendants;
- (void)skipDescendents;
- (id)_under;
- (id)currentSubdirectoryAttributes;
- (id)directoryAttributes;
- (id)fileAttributes;

@end
