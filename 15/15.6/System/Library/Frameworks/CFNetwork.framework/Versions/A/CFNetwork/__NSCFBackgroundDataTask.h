@class NSFileHandle, NSObject, NSInputStream;
@protocol OS_dispatch_io;

@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask {
    struct shared_ptr<RequestBody> { struct RequestBody *__ptr_; struct __shared_weak_count *__cntrl_; } _requestBody;
    NSInputStream *_requestBodyStream;
    NSInputStream *_initialStream;
    NSFileHandle *_readHandle;
    NSObject<OS_dispatch_io> *_pipeIO;
    unsigned long long _numberOfOngoingWrites;
    char _openedStreamDuringNeedNewBodyStream;
    char _readingRequestBody;
}

- (void)dealloc;
- (char)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_onqueue_didFinishWithError:(id)a0;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithOriginalRequest:(id)a0 ident:(unsigned long long)a1 taskGroup:(id)a2;

@end
