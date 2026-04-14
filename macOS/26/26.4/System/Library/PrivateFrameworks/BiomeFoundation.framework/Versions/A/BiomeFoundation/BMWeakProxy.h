@interface BMWeakProxy : NSProxy {
    id _target;
}

+ (id)weakProxyToObject:(id)a0;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;

@end
