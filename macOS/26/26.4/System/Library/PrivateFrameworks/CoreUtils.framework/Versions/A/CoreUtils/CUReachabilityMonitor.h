@class NSURLSession, NSString, NSURL, NSObject;
@protocol OS_dispatch_queue, OS_nw_path_monitor, OS_dispatch_source;

@interface CUReachabilityMonitor : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate> {
    int _captiveNotifyToken;
    int _downloadStatus;
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSURLSession *_urlSession;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long mode;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)_startDownload;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)activate;
- (BOOL)_captiveDetectedCheck;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)_complete:(id)a0;
- (void)_pathMonitorUpdated:(id)a0;
- (void)_activate;
- (void)_pathMonitorStart;
- (void)dealloc;

@end
