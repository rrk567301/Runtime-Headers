@class _NSUndoObject;

@interface _NSUndoStack : NSObject {
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (void)setDiscardable:(BOOL)a0;
- (unsigned long long)max;
- (id)popUndoObject;
- (void)setMax:(unsigned long long)a0;
- (id)oldestUndoActionDate;
- (void)setUserInfo:(id)a0;
- (id)userInfo;
- (void)removeAllObjects;
- (BOOL)isDiscardable;
- (id)_beginMark;
- (unsigned long long)nestingLevel;
- (void)removeObject:(id)a0;
- (id)groupIdentifier;
- (void)push:(id)a0;
- (void)markEnd;
- (unsigned long long)popAllActionsForConnectionUUID:(id)a0;
- (void)setGroupIdentifier:(id)a0;
- (void)removeAllObjectsWithTarget:(id)a0;
- (id)description;
- (void)dealloc;
- (BOOL)popAndInvoke;
- (unsigned long long)topLevelGroupCount;
- (id)undoActionInfo;
- (id)newestUndoActionDate;
- (void)_removeBottom;
- (void)markBegin;
- (unsigned long long)count;
- (id)topUndoObject;
- (id)init;

@end
