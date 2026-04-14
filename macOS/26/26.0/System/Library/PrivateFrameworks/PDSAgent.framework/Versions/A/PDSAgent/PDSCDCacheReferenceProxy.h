@class NSPersistentContainer, PDSCDCacheContainer;

@interface PDSCDCacheReferenceProxy : NSProxy

@property (retain, nonatomic) PDSCDCacheContainer *cacheContainer;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithCacheContainer:(id)a0 persistentContainer:(id)a1;
- (BOOL)conformsToProtocol:(id)a0;
- (void).cxx_destruct;

@end
