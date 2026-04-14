@class NSMutableDictionary;

@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
    NSMutableDictionary *_userInfo;
}

- (BOOL)isDiscardable;
- (void)setDiscardable:(BOOL)a0;
- (void)setGroupIdentifier:(id)a0;
- (void)setUserInfo:(id)a0;
- (id)userInfo;
- (id)groupIdentifier;
- (id)description;
- (BOOL)isBeginMark;
- (void)dealloc;

@end
