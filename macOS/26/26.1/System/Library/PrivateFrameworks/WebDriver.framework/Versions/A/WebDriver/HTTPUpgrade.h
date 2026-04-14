@class HTTPMessage, GCDAsyncSocket, NSObject;
@protocol OS_dispatch_queue;

@interface HTTPUpgrade : NSObject {
    HTTPMessage *request;
    GCDAsyncSocket *asyncSocket;
    id delegate;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *upgradeQueue;

- (id)httpResponse;
- (void)start;
- (id)initWithRequest:(id)a0;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (void)setSocket:(id)a0;
- (void)didOpen;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;
- (void)didClose;

@end
