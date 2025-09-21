@class NSURL;

@interface NWURLSessionUploadTask : NWURLSessionDataTask {
    char _isResuming;
    NSURL *_resumeURL;
}

+ (char)isSubclassOfClass:(Class)a0;

- (char)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)cancelByProducingResumeData:(id /* block */)a0;
- (id)errorWithResumeData:(id)a0;

@end
