@class NSURLSession, NSString, NSOperationQueue, NSURLSessionDataTask;

@interface NSPCaptiveWiFiHandler : NSObject {
    BOOL _isRunning;
    NSString *_interfaceName;
    NSURLSession *_urlSession;
    NSOperationQueue *_operationQueue;
    NSURLSessionDataTask *_dataTask;
    id /* block */ _completionHandler;
}

+ (id)sharedHandler;

- (void).cxx_destruct;
- (void)abort;
- (BOOL)evaluate:(id)a0 completionHandler:(id /* block */)a1;

@end
