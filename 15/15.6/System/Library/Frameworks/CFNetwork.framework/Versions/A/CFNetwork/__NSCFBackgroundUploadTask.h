@class NSURL;

@interface __NSCFBackgroundUploadTask : __NSCFBackgroundDataTask {
    NSURL *_uploadFile;
}

- (void)dealloc;
- (char)isKindOfClass:(Class)a0;
- (void)_onqueue_didFinishWithError:(id)a0;
- (void)cancelByProducingResumeData:(id /* block */)a0;

@end
