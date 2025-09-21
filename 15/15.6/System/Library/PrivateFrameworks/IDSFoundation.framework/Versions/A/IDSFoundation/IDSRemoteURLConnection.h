@class NSString, NSURLRequest, NSObject;
@protocol OS_xpc_object;

@interface IDSRemoteURLConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    char _cancelled;
    char _loading;
    int _retries;
}

@property char requireIDSHost;
@property char forceCellularIfPossible;
@property (retain) NSString *bundleIdentifierForDataUsage;
@property char shouldUsePipelining;
@property int concurrentConnections;
@property char disableKeepAlive;
@property int keepAliveWifi;
@property int keepAliveCell;
@property char shouldReturnTimingData;
@property (retain) NSURLRequest *request;
@property (copy) id /* block */ block;

+ (id)alloc;

- (void)dealloc;
- (void)load;
- (void).cxx_destruct;
- (void)cancel;
- (char)_disconnect;
- (char)_connect;
- (id)initWithURLRequest:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithURLRequest:(id)a0 completionBlockWithTimingData:(id /* block */)a1;
- (void)_disconnected;

@end
