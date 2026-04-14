@interface RTArchiver : NSObject {
    struct archive { } *_archive;
    int _archive_fd;
}

@property (nonatomic) BOOL valid;

+ (BOOL)extractArchiveAtURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (id)initWithOutputURL:(id)a0 compress:(BOOL)a1;
- (void)addFileToArchive:(id)a0;
- (void)addDirectoryToArchive:(id)a0;
- (void)closeArchive;

@end
