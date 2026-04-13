@class HTTPMessage, NSData, NSObject, GCDAsyncSocket;
@protocol OS_dispatch_queue;

@interface WebSocket : NSObject {
    HTTPMessage *request;
    GCDAsyncSocket *asyncSocket;
    NSData *term;
    BOOL isStarted;
    BOOL isOpen;
    BOOL isVersion76;
    id delegate;
    BOOL isRFC6455;
    BOOL nextFrameMasked;
    unsigned long long nextOpCode;
    NSData *maskingKey;
}

@property id delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *websocketQueue;

+ (BOOL)isWebSocketRequest:(id)a0;
+ (BOOL)isVersion76Request:(id)a0;
+ (BOOL)isRFC6455Request:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)sendMessage:(id)a0;
- (void)sendData:(id)a0;
- (void)didReceiveMessage:(id)a0;
- (void)didOpen;
- (void)readRequestBody;
- (void)socket:(id)a0 didReadData:(id)a1 withTag:(long long)a2;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;
- (void)didClose;
- (void)sendResponseHeaders;
- (id)originResponseHeaderValue;
- (id)locationResponseHeaderValue;
- (id)secWebSocketKeyResponseHeaderValue;
- (id)processKey:(id)a0;
- (void)sendResponseBody:(id)a0;
- (BOOL)isValidWebSocketFrame:(unsigned char)a0;
- (id)initWithRequest:(id)a0 socket:(id)a1;

@end
