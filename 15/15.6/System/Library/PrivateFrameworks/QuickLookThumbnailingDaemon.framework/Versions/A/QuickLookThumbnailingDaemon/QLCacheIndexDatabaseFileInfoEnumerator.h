@class QLCacheVersionedFileIdentifier;

@interface QLCacheIndexDatabaseFileInfoEnumerator : QLCacheIndexDatabaseGenericEnumerator {
    char _extraInfo;
    char _ubiquitous;
    QLCacheVersionedFileIdentifier *_fileIdentifier;
}

- (void).cxx_destruct;
- (id)initWithSqliteDatabase:(id)a0 toEnumerateUbiquitousFiles:(char)a1 extraInfo:(char)a2;
- (char)nextFileWithCacheId:(unsigned long long *)a0 versionedFileIdentifier:(id *)a1 thumbnailCount:(unsigned int *)a2 minSize:(float *)a3 maxSize:(float *)a4 totalDataLength:(unsigned long long *)a5;

@end
