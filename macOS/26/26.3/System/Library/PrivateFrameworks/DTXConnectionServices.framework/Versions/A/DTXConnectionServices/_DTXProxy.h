@class DTXProxyChannel;

@interface _DTXProxy : NSObject {
    DTXProxyChannel *_proxyChannel;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithChannel:(id)a0;

@end
