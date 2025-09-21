@class HTTPMessage, NSData, NSObject, GCDAsyncSocket;
@protocol OS_dispatch_queue;

@interface WebSocket : NSObject {
    HTTPMessage *request;
    GCDAsyncSocket *asyncSocket;
    NSData *term;
    char isStarted;
    char isOpen;
    char isVersion76;
    id delegate;
    char isRFC6455;
    char nextFrameMasked;
    unsigned long long nextOpCode;
    NSData *maskingKey;
}

@property id delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *websocketQueue;

+ (char)isRFC6455Request:(id)a0;
+ (char)isVersion76Request:(id)a0;
+ (char)isWebSocketRequest:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)sendMessage:(id)a0;
- (void)stop;
- (void)sendData:(id)a0;
- (void)didReceiveMessage:(id)a0;
- (void)didOpen;
- (void)readRequestBody;
- (void)socket:(id)a0 didReadData:(id)a1 withTag:(long long)a2;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;
- (void)didClose;
- (id)initWithRequest:(id)a0 socket:(id)a1;
- (char)isValidWebSocketFrame:(unsigned char)a0;
- (id)locationResponseHeaderValue;
- (id)originResponseHeaderValue;
- (id)processKey:(id)a0;
- (id)secWebSocketKeyResponseHeaderValue;
- (void)sendResponseBody:(id)a0;
- (void)sendResponseHeaders;

@end
