@class NSPersistentContainer, PDSCDCacheContainer;

@interface PDSCDCacheReferenceProxy : NSProxy

@property (retain, nonatomic) PDSCDCacheContainer *cacheContainer;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;

- (id)initWithCacheContainer:(id)a0 persistentContainer:(id)a1;
- (BOOL)conformsToProtocol:(id)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;

@end
