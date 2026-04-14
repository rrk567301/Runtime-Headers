@class NSMutableArray;

@interface NSURLHandle : NSObject {
    NSMutableArray *_clients;
    id _data;
    unsigned long long _status;
    long long _reserved;
}

+ (void)initialize;
+ (BOOL)canInitWithURL:(id)a0;
+ (id)cachedHandleForURL:(id)a0;
+ (Class)URLHandleClassForURL:(id)a0;
+ (void)registerURLHandleClass:(Class)a0;
+ (BOOL)_subclassManagesData;

- (void)dealloc;
- (id)propertyForKey:(id)a0;
- (id)resourceData;
- (unsigned long long)status;
- (id)initWithURL:(id)a0 cached:(BOOL)a1;
- (id)propertyForKeyIfAvailable:(id)a0;
- (void)flushCachedData;
- (void)backgroundLoadDidFailWithReason:(id)a0;
- (void)endLoadInBackground;
- (void)didLoadBytes:(id)a0 loadComplete:(BOOL)a1;
- (BOOL)writeData:(id)a0;
- (BOOL)writeProperty:(id)a0 forKey:(id)a1;
- (long long)expectedResourceDataSize;
- (id)loadInForeground;
- (void)beginLoadInBackground;
- (BOOL)_isCached;
- (void)cancelLoadInBackground;
- (void)loadInBackground;
- (BOOL)_prepareToMessageClients;
- (void)_finishMessagingClients:(BOOL)a0;
- (id)availableResourceData;
- (void)_sendClientMessage:(SEL)a0 arg1:(id)a1 arg2:(id)a2;
- (id)failureReason;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;

@end
