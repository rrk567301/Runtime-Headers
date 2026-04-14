@class _NSUndoObject;

@interface _NSUndoStack : NSObject {
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (void)setUserInfo:(id)a0;
- (unsigned long long)max;
- (unsigned long long)count;
- (id)groupIdentifier;
- (void)setDiscardable:(BOOL)a0;
- (void)setMax:(unsigned long long)a0;
- (id)description;
- (id)_beginMark;
- (id)init;
- (id)newestUndoActionDate;
- (void)_removeBottom;
- (id)undoActionInfo;
- (id)oldestUndoActionDate;
- (void)setGroupIdentifier:(id)a0;
- (void)markEnd;
- (unsigned long long)popAllActionsForConnectionUUID:(id)a0;
- (unsigned long long)nestingLevel;
- (id)topUndoObject;
- (void)markBegin;
- (void)dealloc;
- (id)popUndoObject;
- (BOOL)popAndInvoke;
- (BOOL)isDiscardable;
- (void)removeAllObjects;
- (void)removeAllObjectsWithTarget:(id)a0;
- (void)push:(id)a0;
- (unsigned long long)topLevelGroupCount;
- (void)removeObject:(id)a0;
- (id)userInfo;

@end
