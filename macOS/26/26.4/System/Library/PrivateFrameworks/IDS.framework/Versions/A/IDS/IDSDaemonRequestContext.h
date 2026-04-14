@class IMTimer, IDSDaemonResponseHandler;

@interface IDSDaemonRequestContext : NSObject {
    IDSDaemonResponseHandler *_responseHandler;
    id /* block */ _timeoutBlock;
    IMTimer *_systemTimer;
}

- (void)killSystemTimer;
- (id)responseHandler;
- (id)initWithResponseHandler:(id)a0 timeoutBlock:(id /* block */)a1 systemTimer:(id)a2;
- (void).cxx_destruct;
- (id /* block */)timeoutBlock;
- (void)dealloc;
- (id)systemTimer;

@end
