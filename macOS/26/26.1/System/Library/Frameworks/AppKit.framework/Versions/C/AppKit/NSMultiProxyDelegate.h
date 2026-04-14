@class NSMutableArray;

@interface NSMultiProxyDelegate : NSObject {
    NSMutableArray *_proxies;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (void)removeObject:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)addObject:(id)a0;

@end
