@class _NSUndoObject;

@interface _NSUndoStack : NSObject {
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (id)oldestUndoActionDate;
- (void)setDiscardable:(BOOL)a0;
- (id)undoActionInfo;
- (BOOL)popAndInvoke;
- (id)topUndoObject;
- (id)groupIdentifier;
- (void)setMax:(unsigned long long)a0;
- (void)_removeBottom;
- (void)markBegin;
- (void)setUserInfo:(id)a0;
- (void)markEnd;
- (void)setGroupIdentifier:(id)a0;
- (unsigned long long)popAllActionsForConnectionUUID:(id)a0;
- (void)removeAllObjects;
- (id)_beginMark;
- (unsigned long long)max;
- (void)push:(id)a0;
- (id)popUndoObject;
- (id)newestUndoActionDate;
- (id)userInfo;
- (BOOL)isDiscardable;
- (id)init;
- (unsigned long long)count;
- (void)removeObject:(id)a0;
- (unsigned long long)topLevelGroupCount;
- (id)description;
- (unsigned long long)nestingLevel;
- (void)dealloc;
- (void)removeAllObjectsWithTarget:(id)a0;

@end
