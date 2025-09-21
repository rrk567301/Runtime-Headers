@class NSString;

@interface PKFolderArchive : PKMutableArchive {
    NSString *_archivePath;
}

- (void)dealloc;
- (id)enumeratorAtPath:(id)a0;
- (char)fileExistsAtPath:(id)a0;
- (char)closeArchive;
- (id)dataForPath:(id)a0;
- (char)extractItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)initForReadingFromPath:(id)a0 options:(id)a1;
- (id)archivePath;
- (id)archiveSignatures;
- (id)fileAttributesAtPath:(id)a0;
- (id)initForReadingFromPath:(id)a0;
- (id)initForWritingToPath:(id)a0 error:(id *)a1;
- (char)setContentsOfArchive:(id)a0 forPath:(id)a1;
- (char)setData:(id)a0 forPath:(id)a1 compressed:(char)a2;
- (char)setFile:(id)a0 forPath:(id)a1 compressed:(char)a2;
- (char)verifyReturningError:(id *)a0;

@end
