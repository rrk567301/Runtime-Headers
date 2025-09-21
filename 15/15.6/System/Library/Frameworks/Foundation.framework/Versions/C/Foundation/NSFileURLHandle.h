@class NSString, NSDictionary, NSFileHandle;

@interface NSFileURLHandle : NSURLHandle {
    NSString *_path;
    NSFileHandle *_fh;
    NSDictionary *_properties;
}

+ (void)initialize;
+ (char)canInitWithURL:(id)a0;
+ (id)cachedHandleForURL:(id)a0;

- (void)dealloc;
- (id)propertyForKey:(id)a0;
- (void)flushCachedData;
- (void)_backgroundFileLoadCompleted:(id)a0;
- (void)beginLoadInBackground;
- (void)endLoadInBackground;
- (id)initWithURL:(id)a0 cached:(char)a1;
- (id)loadInForeground;
- (id)propertyForKeyIfAvailable:(id)a0;
- (char)writeData:(id)a0;
- (char)writeProperty:(id)a0 forKey:(id)a1;

@end
