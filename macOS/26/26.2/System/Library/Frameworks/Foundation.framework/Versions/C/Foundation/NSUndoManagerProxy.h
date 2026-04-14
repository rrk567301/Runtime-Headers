@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager *_manager;
    Class _targetClass;
}

- (id)retain;
- (BOOL)_tryRetain;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void)setTargetClass:(Class)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithManager:(id)a0;
- (oneway void)release;
- (void)superRelease;

@end
