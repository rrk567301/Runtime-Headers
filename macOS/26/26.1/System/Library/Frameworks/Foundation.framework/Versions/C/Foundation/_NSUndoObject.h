@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (BOOL)isEndMark;
- (id)target;
- (id)initWithTarget:(id)a0;
- (void)invoke;
- (BOOL)isBeginMark;
- (id)init;

@end
