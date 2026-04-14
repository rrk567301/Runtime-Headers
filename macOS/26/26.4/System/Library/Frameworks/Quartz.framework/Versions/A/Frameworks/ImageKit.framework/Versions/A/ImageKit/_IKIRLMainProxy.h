@class NSArray;

@interface _IKIRLMainProxy : NSProxy {
    id _originalObject;
    BOOL _wait;
    NSArray *_modes;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (id)originalObject;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (void)cancelPerforms;
- (id)initWithOriginalObject:(id)a0 modes:(id)a1 wait:(BOOL)a2;

@end
