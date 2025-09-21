@class NSFileCoordinator, NSArray, NSProgress, NSURL, NSError;

@interface WFiCloudFileDownloadOperation : NSOperation

@property (readonly, nonatomic) char retrieveFolderContents;
@property (readonly, nonatomic) NSFileCoordinator *fileCoordinator;
@property (readonly, nonatomic) NSProgress *progress;
@property (nonatomic, getter=isExecuting) char executing;
@property (nonatomic, getter=isFinished) char finished;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSArray *downloadedFiles;
@property (readonly, nonatomic) NSError *downloadError;

- (void).cxx_destruct;
- (void)start;
- (char)isAsynchronous;
- (void)downloadDirectoryAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadItemAtFileURL:(id)a0 ofSize:(id)a1 fileIsUbiquitous:(char)a2 completionHandler:(id /* block */)a3;
- (void)finishRunningWithFiles:(id)a0 error:(id)a1;
- (void)getFileInfoForURL:(id)a0 fileIsUbiquitous:(char *)a1 fileIsDirectory:(char *)a2 fileSize:(id *)a3 error:(id *)a4;
- (id)initWithFileURL:(id)a0 retrieveFolderContents:(char)a1 progress:(id)a2;

@end
