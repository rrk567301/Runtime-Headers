@class CWFXPCConnection, NSMutableSet;

@interface CWFXPCConnectionMessageProxy : NSProxy {
    CWFXPCConnection *_target;
    NSMutableSet *_methodSignatures;
}

+ (BOOL)respondsToSelector:(SEL)a0;

- (id)initWithXPCConnection:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)__addMethodSignature:(id)a0;
- (BOOL)__hasMethodSignature:(id)a0;

@end
