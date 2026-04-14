@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (id)init;
- (id)target;
- (void)invoke;
- (id)initWithTarget:(id)a0;
- (BOOL)isBeginMark;
- (BOOL)isEndMark;

@end
