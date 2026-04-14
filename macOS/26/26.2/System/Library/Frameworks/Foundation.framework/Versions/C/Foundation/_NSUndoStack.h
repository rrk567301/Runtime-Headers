@class _NSUndoObject;

@interface _NSUndoStack : NSObject {
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (void)push:(id)a0;
- (BOOL)isDiscardable;
- (unsigned long long)count;
- (unsigned long long)popAllActionsForConnectionUUID:(id)a0;
- (void)setMax:(unsigned long long)a0;
- (void)_removeBottom;
- (void)setDiscardable:(BOOL)a0;
- (id)undoActionInfo;
- (unsigned long long)topLevelGroupCount;
- (void)setGroupIdentifier:(id)a0;
- (id)_beginMark;
- (void)setUserInfo:(id)a0;
- (unsigned long long)nestingLevel;
- (void)removeObject:(id)a0;
- (id)userInfo;
- (id)newestUndoActionDate;
- (void)removeAllObjectsWithTarget:(id)a0;
- (id)groupIdentifier;
- (id)topUndoObject;
- (id)popUndoObject;
- (id)description;
- (id)oldestUndoActionDate;
- (unsigned long long)max;
- (void)markEnd;
- (id)init;
- (void)markBegin;
- (BOOL)popAndInvoke;
- (void)dealloc;
- (void)removeAllObjects;

@end
