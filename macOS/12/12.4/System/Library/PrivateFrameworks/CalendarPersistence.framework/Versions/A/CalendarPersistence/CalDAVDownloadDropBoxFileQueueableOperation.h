@class NSString, CALEntity, NSFileHandle, NSURL, NSMutableArray;

@interface CalDAVDownloadDropBoxFileQueueableOperation : CalDAVEntityQueueableOperation {
    NSString *_attachmentName;
    NSString *_etag;
    CALEntity *_masterEntity;
    NSURL *_dropBoxURL;
    NSMutableArray *_urlsToTry;
}

@property (retain) NSFileHandle *destFileHandle;
@property BOOL isUserRequested;
@property BOOL isLastInBatch;

- (void).cxx_destruct;
- (void)performOperation;
- (void)finishOperation;
- (id)masterEntity;
- (id)initWithChangeRequest:(id)a0 attachmentName:(id)a1 etag:(id)a2 entity:(id)a3 dropBoxURL:(id)a4 fromSource:(id)a5;
- (BOOL)_isLowPriority;
- (id)extraUserInfoForRebuiltError;
- (void)setQuarantineProperties;
- (id)_managedAttachmentByFilename:(id)a0 inContext:(id)a1;
- (void)_processFileWithContentType:(id)a0 etag:(id)a1;
- (id)_popNextURLWrapperToTry;
- (void)_doFetchAtNextURL;
- (void)_handleDownloadResponseHeaders:(id)a0 url:(id)a1 error:(id)a2;
- (void)_addURLToTry:(id)a0;

@end
