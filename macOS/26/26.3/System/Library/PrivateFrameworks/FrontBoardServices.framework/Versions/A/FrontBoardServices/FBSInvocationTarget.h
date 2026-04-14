@class BSObjCProtocol;

@interface FBSInvocationTarget : NSObject {
    BSObjCProtocol *_interface;
    id /* block */ _handler;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end
