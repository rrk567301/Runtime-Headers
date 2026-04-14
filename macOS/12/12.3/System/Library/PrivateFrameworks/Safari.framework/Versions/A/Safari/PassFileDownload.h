@class NSString, NSURL;
@protocol PassFileDownloadDelegate;

@interface PassFileDownload : NSObject <NSURLDownloadDelegate> {
    NSURL *_tempFileURL;
    BOOL _wasCanceled;
}

@property (weak, nonatomic) id<PassFileDownloadDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_reportError:(id)a0;
- (id)initWithMIMEType:(id)a0;
- (struct String { struct WKRetainPtr<const void *> { void *x0; } x0; })wkDownload:(id)a0 decideDestinationWithSuggestedFilename:(const void *)a1 allowOverwrite:(BOOL *)a2;
- (void)wkDownloadDidFinish:(id)a0;
- (void)wkDownload:(id)a0 didFailWithError:(const void *)a1;
- (void)wkDownloadDidCancel:(id)a0;
- (void)wkDownloadProcessDidCrash:(id)a0;
- (void)openPassFileDownload:(id)a0;
- (void)_deleteTempFile;

@end
