@class NSInvocation;

@interface _NSUndoInvocation : _NSUndoObject {
    NSInvocation *_invocation;
}

- (void)invoke;
- (id)description;
- (void)dealloc;
- (id)initWithTarget:(id)a0 invocation:(id)a1;

@end
