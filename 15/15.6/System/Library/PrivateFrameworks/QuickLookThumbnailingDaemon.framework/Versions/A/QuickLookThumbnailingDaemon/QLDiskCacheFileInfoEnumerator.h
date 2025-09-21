@class QLCacheIndexDatabaseFileInfoEnumerator;

@interface QLDiskCacheFileInfoEnumerator : QLDiskCacheEnumerator {
    char _extraInfo;
    char _ubiquitous;
    QLCacheIndexDatabaseFileInfoEnumerator *_indexEnumerator;
}

- (void).cxx_destruct;
- (id)initWithDiskCache:(id)a0 forUbiquitousFiles:(char)a1 extraInfo:(char)a2;
- (id)nextFileInfo;

@end
