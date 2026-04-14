@class BSObjCProtocol;

@interface FBSInvocationTarget : NSObject {
    BSObjCProtocol *_interface;
    id /* block */ _handler;
}

- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;

@end
