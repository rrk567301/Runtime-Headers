@class _NSUndoObject;

@interface _NSUndoStack : NSObject {
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (id)topUndoObject;
- (void)setMax:(unsigned long long)a0;
- (unsigned long long)nestingLevel;
- (void)markBegin;
- (BOOL)isDiscardable;
- (id)popUndoObject;
- (void)markEnd;
- (unsigned long long)max;
- (id)groupIdentifier;
- (void)setGroupIdentifier:(id)a0;
- (void)setDiscardable:(BOOL)a0;
- (BOOL)popAndInvoke;
- (void)removeAllObjectsWithTarget:(id)a0;
- (void)push:(id)a0;
- (void)_removeBottom;
- (id)_beginMark;

@end
