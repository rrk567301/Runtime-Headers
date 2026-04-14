@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (id)init;
- (void)invoke;
- (id)target;
- (BOOL)isEndMark;
- (BOOL)isBeginMark;
- (id)initWithTarget:(id)a0;

@end
