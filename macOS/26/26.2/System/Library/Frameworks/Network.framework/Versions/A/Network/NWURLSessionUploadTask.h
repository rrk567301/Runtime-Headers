@class NSURL;

@interface NWURLSessionUploadTask : NWURLSessionDataTask {
    NSURL *_resumeURLInternal;
}

@property (readonly) NSURL *resumeURL;

+ (BOOL)isSubclassOfClass:(Class)a0;

- (void)cancelByProducingResumeData:(id /* block */)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isUpload;
- (id)uploadResumeURL;
- (id)errorWithResumeData:(id)a0;
- (BOOL)supportsResumableUpload;

@end
