@class IMTimer, IDSDaemonResponseHandler;

@interface IDSDaemonRequestContext : NSObject {
    IDSDaemonResponseHandler *_responseHandler;
    id /* block */ _timeoutBlock;
    IMTimer *_systemTimer;
}

- (id /* block */)timeoutBlock;
- (void)killSystemTimer;
- (id)systemTimer;
- (id)responseHandler;
- (id)initWithResponseHandler:(id)a0 timeoutBlock:(id /* block */)a1 systemTimer:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
