@class _NSUndoObject;

@interface _NSUndoStack : NSObject {
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (void)push:(id)a0;
- (unsigned long long)max;
- (unsigned long long)nestingLevel;
- (void)removeObject:(id)a0;
- (void)dealloc;
- (id)newestUndoActionDate;
- (id)oldestUndoActionDate;
- (id)groupIdentifier;
- (unsigned long long)popAllActionsForConnectionUUID:(id)a0;
- (void)_removeBottom;
- (unsigned long long)count;
- (BOOL)popAndInvoke;
- (unsigned long long)topLevelGroupCount;
- (id)_beginMark;
- (id)init;
- (void)removeAllObjectsWithTarget:(id)a0;
- (id)topUndoObject;
- (id)undoActionInfo;
- (void)removeAllObjects;
- (void)setDiscardable:(BOOL)a0;
- (id)description;
- (void)setUserInfo:(id)a0;
- (void)setGroupIdentifier:(id)a0;
- (void)markBegin;
- (id)popUndoObject;
- (id)userInfo;
- (BOOL)isDiscardable;
- (void)setMax:(unsigned long long)a0;
- (void)markEnd;

@end
