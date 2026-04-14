@class NSString, NSURLRequest, NSURLConnection;

@interface NSURLConnectionHandle : NSURLHandle <NSURLConnectionDelegate> {
    NSURLRequest *req;
    NSURLConnection *conn;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canInitWithURL:(id)a0;
+ (id)cachedHandleForURL:(id)a0;

- (void)dealloc;
- (id)propertyForKey:(id)a0;
- (id)initWithURL:(id)a0 cached:(BOOL)a1;
- (BOOL)writeData:(id)a0;
- (id)propertyForKeyIfAvailable:(id)a0;
- (BOOL)writeProperty:(id)a0 forKey:(id)a1;
- (id)loadInForeground;
- (void)beginLoadInBackground;
- (void)endLoadInBackground;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didFailLoadingWithError:(id)a1;

@end
