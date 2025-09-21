@class NSObject;

@interface TLKAsyncCache : NSObject <TLKComputer> {
    void /* unknown type, empty encoding */ wrappedCache;
}

- (void)clear;
- (id)init;
- (id)getCachedObjectIfAvailableForKey:(id)a0;
- (void).cxx_destruct;
- (void)computeObjectForKey:(NSObject *)a0 completionHandler:(void (^)(NSObject *))a1;
- (id)getCachedObjectsIfAvailableForKeys:(id)a0;
- (void)getObjectForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)getObjectsForKeys:(id)a0 completionHandler:(id /* block */)a1;

@end
