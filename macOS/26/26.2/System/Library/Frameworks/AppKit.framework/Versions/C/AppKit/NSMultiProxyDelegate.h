@class NSMutableArray;

@interface NSMultiProxyDelegate : NSObject {
    NSMutableArray *_proxies;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;
- (void)dealloc;

@end
