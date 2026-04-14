@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager *_manager;
    Class _targetClass;
}

- (BOOL)_tryRetain;
- (void)forwardInvocation:(id)a0;
- (id)initWithManager:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void)setTargetClass:(Class)a0;
- (id)retain;
- (oneway void)release;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)superRelease;

@end
