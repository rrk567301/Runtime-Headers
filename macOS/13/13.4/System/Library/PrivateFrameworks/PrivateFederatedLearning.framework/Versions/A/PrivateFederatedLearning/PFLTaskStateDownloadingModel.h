@class NSData, NSURLSessionDownloadTask;

@interface PFLTaskStateDownloadingModel : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *resumeData;
@property (retain, nonatomic) NSURLSessionDownloadTask *downloadTask;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)suspend;
- (unsigned long long)tag;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
