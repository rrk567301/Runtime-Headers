@class IMTimer, IDSDaemonResponseHandler;

@interface IDSDaemonRequestContext : NSObject {
    IDSDaemonResponseHandler *_responseHandler;
    id /* block */ _timeoutBlock;
    IMTimer *_systemTimer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)responseHandler;
- (void)killSystemTimer;
- (id)initWithResponseHandler:(id)a0 timeoutBlock:(id /* block */)a1 systemTimer:(id)a2;
- (id)systemTimer;
- (id /* block */)timeoutBlock;

@end
