@interface NWURLSessionDownloadTask : NWURLSessionTask

+ (char)isSubclassOfClass:(Class)a0;

- (char)isKindOfClass:(Class)a0;
- (void)cancelByProducingResumeData:(id /* block */)a0;
- (id)errorWithResumeData:(id)a0;

@end
