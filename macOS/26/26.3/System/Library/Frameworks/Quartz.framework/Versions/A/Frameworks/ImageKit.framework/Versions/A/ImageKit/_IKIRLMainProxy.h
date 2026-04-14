@class NSArray;

@interface _IKIRLMainProxy : NSProxy {
    id _originalObject;
    BOOL _wait;
    NSArray *_modes;
}

- (id)originalObject;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)cancelPerforms;
- (id)initWithOriginalObject:(id)a0 modes:(id)a1 wait:(BOOL)a2;

@end
