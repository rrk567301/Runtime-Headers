@class NSURL;

@interface FPArchiveTemporaryFolder : NSObject {
    NSURL *_url;
    BOOL _didStartAccessing;
    NSURL *_temporaryFolderURL;
}

- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)temporaryFolderURLGetError:(id *)a0;

@end
