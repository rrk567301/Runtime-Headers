@class NSURL;

@interface __NSCFBackgroundUploadTask : __NSCFBackgroundDataTask {
    NSURL *_uploadFile;
}

- (void)_onqueue_didFinishWithError:(id)a0;
- (void)cancelByProducingResumeData:(id /* block */)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void)dealloc;

@end
