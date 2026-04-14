@class NSString;

@interface PKFolderArchive : PKMutableArchive {
    NSString *_archivePath;
}

- (void)dealloc;
- (id)enumeratorAtPath:(id)a0;
- (BOOL)fileExistsAtPath:(id)a0;
- (BOOL)closeArchive;
- (id)dataForPath:(id)a0;
- (id)archivePath;
- (BOOL)extractItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)fileAttributesAtPath:(id)a0;
- (BOOL)verifyReturningError:(id *)a0;
- (id)initForReadingFromPath:(id)a0;
- (id)initForReadingFromPath:(id)a0 options:(id)a1;
- (BOOL)setData:(id)a0 forPath:(id)a1 compressed:(BOOL)a2;
- (BOOL)setFile:(id)a0 forPath:(id)a1 compressed:(BOOL)a2;
- (BOOL)setContentsOfArchive:(id)a0 forPath:(id)a1;
- (id)initForWritingToPath:(id)a0 error:(id *)a1;
- (id)archiveSignatures;

@end
