@class NSMutableDictionary;

@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
    NSMutableDictionary *_userInfo;
}

- (void)dealloc;
- (id)groupIdentifier;
- (void)setDiscardable:(BOOL)a0;
- (id)description;
- (void)setUserInfo:(id)a0;
- (void)setGroupIdentifier:(id)a0;
- (id)userInfo;
- (BOOL)isBeginMark;
- (BOOL)isDiscardable;

@end
