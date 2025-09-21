@class NSArray;

@interface _IKIRLMainProxy : NSProxy {
    id _originalObject;
    char _wait;
    NSArray *_modes;
}

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (id)originalObject;
- (void)cancelPerforms;
- (id)initWithOriginalObject:(id)a0 modes:(id)a1 wait:(char)a2;

@end
