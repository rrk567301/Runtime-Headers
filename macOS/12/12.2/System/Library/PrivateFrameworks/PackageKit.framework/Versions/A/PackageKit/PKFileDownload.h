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

- (void)dealloc;
- (id)delegate;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)resumeData;
- (void)setDestination:(id)a0 allowOverwrite:(BOOL)a1;
- (id)sourceURL;
- (id)sourcePath;
- (id)initWithURL:(id)a0 withChunklistURL:(id)a1 withChunklistSize:(id)a2 delegate:(id)a3;
- (id)initWithResumeData:(id)a0 destination:(id)a1 delegate:(id)a2;
- (int)_fileCopyThread:(id)a0;
- (void)_currentThreadCallback:(id)a0;

@end
