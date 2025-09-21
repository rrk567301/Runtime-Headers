@interface RTArchiver : NSObject {
    struct archive { } *_archive;
    int _archive_fd;
}

@property (nonatomic) char valid;

+ (char)extractArchiveAtURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void)addDirectoryToArchive:(id)a0;
- (void)addFileToArchive:(id)a0;
- (void)closeArchive;
- (id)initWithOutputURL:(id)a0 compress:(char)a1;

@end
