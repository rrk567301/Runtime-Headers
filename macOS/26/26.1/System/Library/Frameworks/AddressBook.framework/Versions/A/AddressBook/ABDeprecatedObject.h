@interface ABDeprecatedObject : NSObject

+ (id)alloc;

- (id)noop;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end
