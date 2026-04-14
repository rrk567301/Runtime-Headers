@class NSString, NSDictionary, NSFileHandle;

@interface NSFileURLHandle : NSURLHandle {
    NSString *_path;
    NSFileHandle *_fh;
    NSDictionary *_properties;
}

+ (void)initialize;
+ (BOOL)canInitWithURL:(id)a0;
+ (id)cachedHandleForURL:(id)a0;

- (void)dealloc;
- (id)propertyForKey:(id)a0;
- (id)initWithURL:(id)a0 cached:(BOOL)a1;
- (id)propertyForKeyIfAvailable:(id)a0;
- (void)flushCachedData;
- (void)endLoadInBackground;
- (BOOL)writeData:(id)a0;
- (BOOL)writeProperty:(id)a0 forKey:(id)a1;
- (id)loadInForeground;
- (void)beginLoadInBackground;
- (void)_backgroundFileLoadCompleted:(id)a0;

@end
