@class NSURL;

@interface CALURLPublishOperation : CALPublishOperation {
    NSURL *_url;
}

+ (BOOL)canHandleURL:(id)a0;

- (void).cxx_destruct;
- (void)publish:(id)a0 automatic:(BOOL)a1;
- (void)publishData:(id)a0 automatic:(BOOL)a1;
- (void)unpublishWithAutomatic:(BOOL)a0;
- (void)abortOperation;
- (id)initWithPublisher:(id)a0 withURL:(id)a1;
- (void)unpublishDataWithAutomatic:(BOOL)a0;

@end
