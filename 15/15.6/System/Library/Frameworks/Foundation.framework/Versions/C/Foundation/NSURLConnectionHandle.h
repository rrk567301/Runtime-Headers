@class NSString, NSURLRequest, NSURLConnection;

@interface NSURLConnectionHandle : NSURLHandle <NSURLConnectionDelegate> {
    NSURLRequest *req;
    NSURLConnection *conn;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)canInitWithURL:(id)a0;
+ (id)cachedHandleForURL:(id)a0;

- (void)dealloc;
- (id)propertyForKey:(id)a0;
- (void)beginLoadInBackground;
- (void)connection:(id)a0 didFailLoadingWithError:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)endLoadInBackground;
- (id)initWithURL:(id)a0 cached:(char)a1;
- (id)loadInForeground;
- (id)propertyForKeyIfAvailable:(id)a0;
- (char)writeData:(id)a0;
- (char)writeProperty:(id)a0 forKey:(id)a1;

@end
