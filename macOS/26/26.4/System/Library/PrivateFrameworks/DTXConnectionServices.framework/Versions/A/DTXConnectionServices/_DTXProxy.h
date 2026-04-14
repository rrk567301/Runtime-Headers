@class DTXProxyChannel;

@interface _DTXProxy : NSObject {
    DTXProxyChannel *_proxyChannel;
}

- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithChannel:(id)a0;

@end
