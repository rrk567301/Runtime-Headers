@class NSMutableData, NSDictionary;

@interface NSHTTPURLHandle : NSURLHandle {
    struct __CFHTTPMessage { } *request;
    struct __CFReadStream { } *httpStream;
    NSMutableData *errorPage;
    unsigned char examinedHeaders;
    char _padding[3];
    NSDictionary *proxyConfig;
}

+ (void)initialize;
+ (BOOL)canInitWithURL:(id)a0;
+ (id)cachedHandleForURL:(id)a0;
+ (id)canonicalHTTPURLForURL:(id)a0;

- (void)dealloc;
- (id)propertyForKey:(id)a0;
- (id)_URL;
- (id)initWithURL:(id)a0 cached:(BOOL)a1;
- (void)flushCachedData;
- (BOOL)writeData:(id)a0;
- (id)propertyForKeyIfAvailable:(id)a0;
- (BOOL)writeProperty:(id)a0 forKey:(id)a1;
- (long long)expectedResourceDataSize;
- (id)loadInForeground;
- (void)beginLoadInBackground;
- (void)endLoadInBackground;
- (void)reportStreamError;
- (void)performStreamRead;
- (struct __CFHTTPMessage { } *)_constructRequestForURL:(id)a0 isHead:(BOOL)a1;
- (void)populateCacheFromStream:(struct __CFReadStream { } *)a0 data:(id)a1;
- (void)_configureStreamDetails:(struct __CFReadStream { } *)a0;
- (void)_processHeaders:(struct __CFHTTPMessage { } *)a0;

@end
