@interface ABDeprecatedObject : NSObject

+ (id)alloc;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)noop;

@end
