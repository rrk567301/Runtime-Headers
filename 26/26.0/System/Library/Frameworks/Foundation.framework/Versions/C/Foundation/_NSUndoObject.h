@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (void)invoke;
- (id)initWithTarget:(id)a0;
- (id)init;
- (id)target;
- (BOOL)isEndMark;
- (BOOL)isBeginMark;

@end
