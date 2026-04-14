@class NSDictionary, MLMediaLibraryImpl;

@interface MLMediaLibrary : NSObject {
    MLMediaLibraryImpl *_impl;
}

@property (readonly, copy) NSDictionary *mediaSources;

+ (void)initialize;
+ (void)unboxURLWithKey1:(id)a0 key2:(id)a1 inDictionary:(id)a2;

- (void)dealloc;
- (id)init;
- (id)initWithOptions:(id)a0;
- (id)service;
- (id)outboundRequestQueue;
- (id)outboundRequestCondition;
- (void)setOutboundRequestInFlight:(BOOL)a0;
- (BOOL)outboundRequestInFlight;
- (void)xpcConnectionWasInterrupted;
- (void)setMediaSources:(id)a0;
- (id)mediaObjectAttributesExpectedClasses;
- (void)cacheDeletePurgeable:(id)a0 urgency:(long long)a1 completionHandler:(id /* block */)a2;
- (void)cacheDeletePurge:(id)a0 urgency:(long long)a1 completionHandler:(id /* block */)a2;
- (void)cacheDeleteCancel;
- (void)cacheDeletePeriodic:(id)a0 urgency:(long long)a1 completionHandler:(id /* block */)a2;

@end
