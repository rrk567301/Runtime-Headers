@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (void)invoke;
- (id)initWithTarget:(id)a0;
- (BOOL)isBeginMark;
- (id)init;
- (BOOL)isEndMark;
- (id)target;

@end
