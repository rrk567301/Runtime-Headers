@class IMTimer, IDSDaemonResponseHandler;

@interface IDSDaemonRequestContext : NSObject {
    IDSDaemonResponseHandler *_responseHandler;
    id /* block */ _timeoutBlock;
    IMTimer *_systemTimer;
}

- (id /* block */)timeoutBlock;
- (void).cxx_destruct;
- (id)initWithResponseHandler:(id)a0 timeoutBlock:(id /* block */)a1 systemTimer:(id)a2;
- (id)responseHandler;
- (void)killSystemTimer;
- (id)systemTimer;
- (void)dealloc;

@end
