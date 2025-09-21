@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager *_manager;
    Class _targetClass;
}

- (id)initWithManager:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)_tryRetain;
- (id)retain;
- (void)forwardInvocation:(id)a0;
- (oneway void)release;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)setTargetClass:(Class)a0;
- (void)superRelease;

@end
