@class HTTPMessage, GCDAsyncSocket, NSObject;
@protocol OS_dispatch_queue;

@interface HTTPUpgrade : NSObject {
    HTTPMessage *request;
    GCDAsyncSocket *asyncSocket;
    id delegate;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *upgradeQueue;

- (id)httpResponse;
- (id)initWithRequest:(id)a0;
- (void)start;
- (void)setSocket:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)didOpen;
- (void).cxx_destruct;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;
- (void)didClose;

@end
