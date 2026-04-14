@class NSURL;

@interface FPArchiveTemporaryFolder : NSObject {
    NSURL *_url;
    BOOL _didStartAccessing;
    NSURL *_temporaryFolderURL;
}

- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)temporaryFolderURLGetError:(id *)a0;

@end
