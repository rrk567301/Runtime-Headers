@class NSMutableArray;

@interface TSCH3DSceneRenderCacheObject : NSObject {
    char _cachingEnabled;
    NSMutableArray *_dynamicResources;
    NSMutableArray *_childCacheObjects;
}

@property (nonatomic) char cachingEnabled;

+ (id)cacheObject;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)resourceCount;
- (void)flushCache;
- (id)resourceAtIndex:(unsigned long long)a0;
- (void)allocateDynamicResourcesIntoArray:(id)a0;
- (id)childCacheObjectAtIndex:(unsigned long long)a0;
- (int)p_resourceUpdateFlag;
- (void)p_updateResourceUpdateFlags:(int)a0;
- (id)resourceAtIndex:(unsigned long long)a0 created:(char *)a1 ifAbsent:(id /* block */)a2;

@end
