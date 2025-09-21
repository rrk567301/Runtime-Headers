@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager *_manager;
    Class _targetClass;
}

- (oneway void)release;
- (char)_tryRetain;
- (void)forwardInvocation:(id)a0;
- (char)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)retain;
- (void)setTargetClass:(Class)a0;
- (id)initWithManager:(id)a0;
- (void)superRelease;

@end
