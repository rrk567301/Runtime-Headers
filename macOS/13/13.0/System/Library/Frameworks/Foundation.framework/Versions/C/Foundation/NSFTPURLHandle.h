@class NSURL;

@interface NSFTPURLHandle : NSURLHandle {
    NSURL *originalURL;
    struct __CFReadStream { } *ftpReadStream;
}

+ (void)initialize;
+ (BOOL)canInitWithURL:(id)a0;
+ (id)cachedHandleForURL:(id)a0;

- (void)dealloc;
- (id)propertyForKey:(id)a0;
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
- (struct __CFReadStream { } *)createFTPReadStream;
- (id)errorStringForFTPStatusCode:(long long)a0 fromURL:(id)a1;

@end
