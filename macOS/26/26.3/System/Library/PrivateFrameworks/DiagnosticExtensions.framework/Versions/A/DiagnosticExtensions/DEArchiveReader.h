@interface DEArchiveReader : NSObject {
    struct archive { } *_archive;
}

- (void)closeArchive;
- (id)initWithURL:(id)a0;
- (id)listContainedPaths;

@end
