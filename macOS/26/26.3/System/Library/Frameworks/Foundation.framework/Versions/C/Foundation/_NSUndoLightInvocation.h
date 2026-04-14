@interface _NSUndoLightInvocation : _NSUndoObject {
    SEL _selector;
    id _arg;
}

- (id)description;
- (void)invoke;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)dealloc;
- (id)_argument;

@end
