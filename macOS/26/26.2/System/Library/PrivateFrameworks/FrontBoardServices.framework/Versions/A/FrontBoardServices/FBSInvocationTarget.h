@class BSObjCProtocol;

@interface FBSInvocationTarget : NSObject {
    BSObjCProtocol *_interface;
    id /* block */ _handler;
}

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
