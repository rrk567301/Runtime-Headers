@class NSString, NSThread;
@protocol PKDownloadDelegate, NSObject;

@interface PKFileDownload : PKDownload {
    NSString *_srcPath;
    int _readFileDescriptor;
    int _writeFileDescriptor;
    long long _bytesDownloaded;
    BOOL _isResume;
    BOOL _runFileReadThread;
    NSThread *_fileReadThread;
    id<PKDownloadDelegate, NSObject> _delegate;
}

+ (BOOL)canDownloadURL:(id)a0;
+ (BOOL)canDownloadWithResumeData:(id)a0;

- (void)start;
- (void)dealloc;
- (void)cancel;
- (id)sourcePath;
- (id)sourceURL;
- (id)delegate;
- (void).cxx_destruct;
- (id)resumeData;
- (void)setDestination:(id)a0 allowOverwrite:(BOOL)a1;
- (void)_currentThreadCallback:(id)a0;
- (int)_fileCopyThread:(id)a0;
- (id)initWithResumeData:(id)a0 destination:(id)a1 delegate:(id)a2;
- (id)initWithURL:(id)a0 withChunklistURL:(id)a1 withChunklistSize:(id)a2 delegate:(id)a3;

@end
