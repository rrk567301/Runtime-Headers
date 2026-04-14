@class HTTPMessage, GCDAsyncSocket, NSObject;
@protocol OS_dispatch_queue;

@interface HTTPUpgrade : NSObject {
    HTTPMessage *request;
    GCDAsyncSocket *asyncSocket;
    id delegate;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *upgradeQueue;

- (void)stop;
- (id)initWithRequest:(id)a0;
- (void)didOpen;
- (void).cxx_destruct;
- (void)start;
- (id)httpResponse;
- (void)dealloc;
- (void)setSocket:(id)a0;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;
- (void)didClose;

@end
