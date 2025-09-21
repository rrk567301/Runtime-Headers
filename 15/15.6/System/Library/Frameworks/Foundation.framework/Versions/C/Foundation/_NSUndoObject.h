@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (id)init;
- (void)invoke;
- (id)target;
- (id)initWithTarget:(id)a0;
- (char)isBeginMark;
- (char)isEndMark;

@end
