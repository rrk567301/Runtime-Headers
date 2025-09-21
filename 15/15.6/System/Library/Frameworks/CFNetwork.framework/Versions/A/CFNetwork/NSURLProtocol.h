@class NSURLSessionTask, NSCachedURLResponse, NSURLRequest, NSURLProtocolInternal;
@protocol NSURLProtocolClient;

@interface NSURLProtocol : NSObject {
    NSURLProtocolInternal *_internal;
    NSURLSessionTask *_task;
    char _inInitWithTask;
}

@property (readonly, retain) id<NSURLProtocolClient> client;
@property (readonly, copy) NSURLRequest *request;
@property (readonly, copy) NSCachedURLResponse *cachedResponse;

+ (void)setProperty:(id)a0 forKey:(id)a1 inRequest:(id)a2;
+ (void)removePropertyForKey:(id)a0 inRequest:(id)a1;
+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)a0;
+ (Class)_protocolClassForRequest:(id)a0;
+ (Class)_protocolClassForRequest:(id)a0 skipAppSSO:(char)a1;
+ (char)canInitWithRequest:(id)a0;
+ (char)canInitWithTask:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0 task:(id)a1;
+ (id)propertyForKey:(id)a0 inRequest:(id)a1;
+ (char)registerClass:(Class)a0;
+ (char)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (void)unregisterClass:(Class)a0;

- (void)dealloc;
- (id)init;
- (void)stopLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (id)initWithTask:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (void)startLoading;
- (id)task;

@end
