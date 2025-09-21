@class NSURL;

@interface DEArchive : NSObject {
    struct archive { } *_archive;
    char _hasClosedArchive;
}

@property (retain) NSURL *tarGzUrl;
@property (retain) NSURL *sourceDir;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)closeArchive;
- (char)addFile:(id)a0 withPathName:(id)a1;
- (struct archive { } *)archiverForUrl:(id)a0;
- (char)addFile:(id)a0 withPathName:(id)a1 progressHandler:(id /* block */)a2;

@end
