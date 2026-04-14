@class NSString, NSMutableData, NSObject, NSURLSessionDataTask;
@protocol OS_dispatch_semaphore;

@interface VCPDownloadManager : NSObject {
    NSObject<OS_dispatch_semaphore> *_mutex;
    NSMutableData *_buffer;
    NSString *_localIdentifier;
    unsigned long long _length;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSURLSessionDataTask *_dataTask;
}

@property (copy, nonatomic) id /* block */ cancel;

+ (id)sharedManager;
+ (unsigned long long)maxSizeBytes;
+ (void)_reportDownload:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)flush;
- (id)requestDownloadOfResource:(id)a0;

@end
