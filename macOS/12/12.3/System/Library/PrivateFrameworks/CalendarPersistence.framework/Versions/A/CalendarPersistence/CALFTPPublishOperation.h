@class CalFTPOperation;

@interface CALFTPPublishOperation : CALURLPublishOperation

@property (retain) CalFTPOperation *ftpOperation;

+ (BOOL)canHandleURL:(id)a0;

- (void).cxx_destruct;
- (void)publishData:(id)a0 automatic:(BOOL)a1;
- (void)abortOperation;
- (void)unpublishDataWithAutomatic:(BOOL)a0;
- (void)ftpOperationDidFinish:(id)a0;

@end
