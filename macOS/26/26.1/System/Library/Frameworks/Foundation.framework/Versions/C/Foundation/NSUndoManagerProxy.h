@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager *_manager;
    Class _targetClass;
}

- (id)retain;
- (oneway void)release;
- (void)setTargetClass:(Class)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)_tryRetain;
- (BOOL)isKindOfClass:(Class)a0;
- (id)initWithManager:(id)a0;
- (void)superRelease;

@end
