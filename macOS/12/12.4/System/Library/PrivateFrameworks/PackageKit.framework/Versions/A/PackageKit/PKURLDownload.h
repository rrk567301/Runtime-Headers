@class PKURLTransport, IASChunklist, NSURL, NSFileHandle, NSThread, NSLock, NSData, NSNumber;
@protocol PKDownloadDelegate, NSObject;

@interface PKURLDownload : PKDownload <PKDownloadDelegate> {
    id<PKDownloadDelegate, NSObject> _delegate;
}

@property (retain) NSThread *delegateThread;
@property (retain) NSURL *fileURL;
@property (retain) NSURL *chunklistURL;
@property (retain) NSNumber *chunklistSize;
@property BOOL overwriteAllowed;
@property (copy) id /* block */ connectionChallengeBlock;
@property (copy) id /* block */ sessionChallengeBlock;
@property (retain, nonatomic) NSLock *downloaderLock;
@property BOOL cancelled;
@property (retain) PKURLTransport *chunklistTransport;
@property (retain) PKURLTransport *fileTransport;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (retain, nonatomic) NSFileHandle *chunklistHandle;
@property (retain, nonatomic) IASChunklist *chunklist;
@property (retain, nonatomic) NSData *chunklistHash;
@property (retain) NSData *fileResumeData;
@property (retain) NSData *chunklistResumeData;

+ (BOOL)canDownloadInBackground;
+ (BOOL)canDownloadURL:(id)a0;
+ (BOOL)canDownloadWithResumeData:(id)a0;

- (void)dealloc;
- (id)delegate;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)resumeData;
- (void)download:(id)a0 didFailWithError:(id)a1;
- (void)downloadDidBegin:(id)a0;
- (id)download:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)download:(id)a0 didReceiveResponse:(id)a1;
- (void)download:(id)a0 didReceiveDataOfLength:(unsigned long long)a1;
- (void)downloadDidFinish:(id)a0;
- (void)setDestination:(id)a0 allowOverwrite:(BOOL)a1;
- (void)_runBlockOnThread:(id)a0 withBlock:(id /* block */)a1 waitUntilDone:(BOOL)a2;
- (void)__runBlock:(id /* block */)a0;
- (id)sourceURL;
- (id)sourcePath;
- (BOOL)validatesDuringDownload;
- (BOOL)failedDownloadValidation;
- (void)download:(id)a0 receiveLogWithLevel:(unsigned long long)a1 withLogMesage:(id)a2;
- (void)download:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (void)download:(id)a0 didReceiveChallenge:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)download:(id)a0 receivedResumeBytesOfLength:(long long)a1;
- (void)download:(id)a0 didCheckDataOfLength:(unsigned long long)a1;
- (id)initWithURL:(id)a0 withChunklistURL:(id)a1 withChunklistSize:(id)a2 delegate:(id)a3;
- (id)initWithResumeData:(id)a0 destination:(id)a1 delegate:(id)a2;
- (void)establishAuthenticationChallengeBlocks;
- (id)_localPathFromRemoteURL:(id)a0 appendingExtension:(BOOL)a1;
- (id)_validateChunklistIntegrityAndReturnChunklistForHandle:(id)a0 withOutHash:(id *)a1 withError:(id *)a2;
- (void)_startAsyncFileDownload;
- (void)_beginDownloadOfURL:(id)a0 acceptingRanges:(BOOL)a1 withExpectedLength:(long long)a2 withQueue:(id)a3;
- (BOOL)_verifyFileIntegrityAgainstChunklist:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_appendFileURL:(id)a0 toURL:(id)a1;
- (void)_downloadChunk:(id)a0 usingQueue:(id)a1 withChunkIndex:(unsigned long long)a2 withChunkSizes:(id)a3 withChunksValid:(id)a4 withChunkAttempt:(unsigned long long)a5 withBytesDownloadedSoFor:(unsigned long long)a6 withReply:(id /* block */)a7;
- (void)_populateChunklistFromDiskIfExists;
- (void)_asyncDownloadChunklist;
- (void)_runBlockOnDelegateThread:(id /* block */)a0 waitUntilDone:(BOOL)a1;

@end
