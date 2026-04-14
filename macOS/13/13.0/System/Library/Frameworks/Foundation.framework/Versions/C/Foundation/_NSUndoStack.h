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
- (void)removeObject:(id)a0;
- (void)removeAllObjects;
- (void)setGroupIdentifier:(id)a0;
- (id)groupIdentifier;
- (BOOL)isDiscardable;
- (void)setDiscardable:(BOOL)a0;
- (void)_removeBottom;
- (unsigned long long)max;
- (void)setMax:(unsigned long long)a0;
- (void)push:(id)a0;
- (id)popUndoObject;
- (id)_beginMark;
- (id)topUndoObject;
- (void)markBegin;
- (void)markEnd;
- (BOOL)popAndInvoke;
- (unsigned long long)nestingLevel;
- (void)removeAllObjectsWithTarget:(id)a0;

@end
