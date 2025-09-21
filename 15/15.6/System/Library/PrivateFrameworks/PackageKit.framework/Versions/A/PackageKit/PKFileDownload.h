@class NSString, NSThread;
@protocol PKDownloadDelegate, NSObject;

@interface PKFileDownload : PKDownload {
    NSString *_srcPath;
    int _readFileDescriptor;
    int _writeFileDescriptor;
    long long _bytesDownloaded;
    char _isResume;
    char _runFileReadThread;
    NSThread *_fileReadThread;
    id<PKDownloadDelegate, NSObject> _delegate;
}

+ (char)canDownloadURL:(id)a0;
+ (char)canDownloadWithResumeData:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)start;
- (void)cancel;
- (id)sourcePath;
- (id)resumeData;
- (void)setDestination:(id)a0 allowOverwrite:(char)a1;
- (id)sourceURL;
- (void)_currentThreadCallback:(id)a0;
- (int)_fileCopyThread:(id)a0;
- (id)initWithResumeData:(id)a0 destination:(id)a1 delegate:(id)a2;
- (id)initWithURL:(id)a0 withChunklistURL:(id)a1 withChunklistSize:(id)a2 delegate:(id)a3;

@end
