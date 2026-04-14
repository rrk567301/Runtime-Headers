@class NSMutableDictionary;

@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
    NSMutableDictionary *_userInfo;
}

- (void)setDiscardable:(BOOL)a0;
- (void)setUserInfo:(id)a0;
- (id)userInfo;
- (BOOL)isDiscardable;
- (id)groupIdentifier;
- (void)setGroupIdentifier:(id)a0;
- (BOOL)isBeginMark;
- (id)description;
- (void)dealloc;

@end
