@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager *_manager;
    Class _targetClass;
}

- (id)initWithManager:(id)a0;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)isKindOfClass:(Class)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)setTargetClass:(Class)a0;
- (oneway void)release;
- (void)superRelease;

@end
