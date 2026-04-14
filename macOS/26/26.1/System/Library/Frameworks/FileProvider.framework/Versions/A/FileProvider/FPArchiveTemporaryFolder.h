@class NSURL;

@interface FPArchiveTemporaryFolder : NSObject {
    NSURL *_url;
    BOOL _didStartAccessing;
    NSURL *_temporaryFolderURL;
}

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)temporaryFolderURLGetError:(id *)a0;

@end
