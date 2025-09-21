@class NSError, NSURLSessionTask, ACSURLSession, NSURLResponse, NSProgress, NSURLRequest, NSString;

@interface ACSURLSessionTask : NSObject <NSCopying, NSProgressReporting>

@property (copy) id /* block */ _nsurlTaskCreator;
@property (retain) NSURLSessionTask *_nsurlTaskToOrigin;
@property (retain) NSURLSessionTask *_nsurlTaskToCachingServer;
@property (weak) ACSURLSession *_weakSession;
@property (readonly) char _isUpload;
@property char _tryCachingServer;
@property char _failBackToOrigin;
@property char _suspended;
@property long long _internalState;
@property (readonly) unsigned long long taskIdentifier;
@property (readonly, copy) NSURLRequest *originalRequest;
@property (readonly, copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSURLResponse *response;
@property (readonly) NSProgress *progress;
@property long long countOfBytesClientExpectsToSend;
@property long long countOfBytesClientExpectsToReceive;
@property (readonly) long long countOfBytesReceived;
@property (readonly) long long countOfBytesSent;
@property (readonly) long long countOfBytesExpectedToSend;
@property (readonly) long long countOfBytesExpectedToReceive;
@property (copy) NSString *taskDescription;
@property (readonly) long long state;
@property (readonly, copy) NSError *error;
@property float priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (id)_nsurlTaskForRequest:(id)a0;
- (id)initWithNSURLTaskCreator:(id /* block */)a0 initialRequest:(id)a1 forSession:(id)a2;

@end
