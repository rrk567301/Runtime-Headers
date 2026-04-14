@class NSURL;

@interface NWURLSessionDownloadTask : NWURLSessionTask

@property (readonly) NSURL *fileURL;

+ (BOOL)isSubclassOfClass:(Class)a0;

- (void)cancelByProducingResumeData:(id /* block */)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isUpload;
- (id)errorWithResumeData:(id)a0;

@end
