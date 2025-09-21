@class NSString, IMURLRequestSession, NSURLRequest;

@interface IMRemoteURLConnection : NSObject

@property (nonatomic) char cancelled;
@property (nonatomic) char loading;
@property (retain, nonatomic) IMURLRequestSession *URLSession;
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

- (void)dealloc;
- (void)load;
- (void).cxx_destruct;
- (void)cancel;
- (void)_direct_cancel;
- (void)_direct_load;
- (id)initWithURLRequest:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithURLRequest:(id)a0 completionBlockWithTimingData:(id /* block */)a1;

@end
