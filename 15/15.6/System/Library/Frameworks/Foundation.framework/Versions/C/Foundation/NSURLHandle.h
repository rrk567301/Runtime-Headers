@class NSMutableArray;

@interface NSURLHandle : NSObject {
    NSMutableArray *_clients;
    id _data;
    unsigned long long _status;
    long long _reserved;
}

+ (void)initialize;
+ (char)canInitWithURL:(id)a0;
+ (Class)URLHandleClassForURL:(id)a0;
+ (char)_subclassManagesData;
+ (id)cachedHandleForURL:(id)a0;
+ (void)registerURLHandleClass:(Class)a0;

- (void)dealloc;
- (id)propertyForKey:(id)a0;
- (id)resourceData;
- (unsigned long long)status;
- (void)flushCachedData;
- (void)_finishMessagingClients:(char)a0;
- (char)_isCached;
- (char)_prepareToMessageClients;
- (void)_sendClientMessage:(SEL)a0 arg1:(id)a1 arg2:(id)a2;
- (void)addClient:(id)a0;
- (id)availableResourceData;
- (void)backgroundLoadDidFailWithReason:(id)a0;
- (void)beginLoadInBackground;
- (void)cancelLoadInBackground;
- (void)didLoadBytes:(id)a0 loadComplete:(char)a1;
- (void)endLoadInBackground;
- (long long)expectedResourceDataSize;
- (id)failureReason;
- (id)initWithURL:(id)a0 cached:(char)a1;
- (void)loadInBackground;
- (id)loadInForeground;
- (id)propertyForKeyIfAvailable:(id)a0;
- (void)removeClient:(id)a0;
- (char)writeData:(id)a0;
- (char)writeProperty:(id)a0 forKey:(id)a1;

@end
