@class NSString, TPSURLSessionTask;

@interface TPSURLSessionItem : NSObject <TPSURLSessionTaskDelegate>

@property (nonatomic, getter=isCancelled) char cancelled;
@property (readonly, nonatomic) long long state;
@property (retain, nonatomic) TPSURLSessionTask *sessionTask;
@property (readonly, nonatomic) id /* block */ completionHanlder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (long long)state;
- (void)cancel;
- (void)URLSessionSessionTask:(id)a0 didCompleteWithError:(id)a1;
- (id)initWithSessionTask:(id)a0 completionHandler:(id /* block */)a1;
- (void)notifyWithSessionTask:(id)a0 error:(id)a1;

@end
