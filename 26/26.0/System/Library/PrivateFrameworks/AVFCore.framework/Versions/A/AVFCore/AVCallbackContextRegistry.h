@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVCallbackContextRegistry : NSObject {
    NSMutableDictionary *_contextsForTokens;
    unsigned long long _currentToken;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
}

+ (id)sharedCallbackContextRegistry;
+ (void)initialize;

- (void)dealloc;
- (void)unregisterCallbackContextForToken:(void *)a0;
- (id)init;
- (id)callbackContextForToken:(void *)a0;
- (void *)registerCallbackContextObject:(id)a0;

@end
