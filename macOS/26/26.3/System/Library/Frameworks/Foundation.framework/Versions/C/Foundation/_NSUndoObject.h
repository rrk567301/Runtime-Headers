@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (id)initWithTarget:(id)a0;
- (BOOL)isBeginMark;
- (void)invoke;
- (id)init;
- (BOOL)isEndMark;
- (id)target;

@end
