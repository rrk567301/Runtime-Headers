@class NSMutableDictionary;

@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
    NSMutableDictionary *_userInfo;
}

- (void)setUserInfo:(id)a0;
- (id)groupIdentifier;
- (BOOL)isBeginMark;
- (void)setDiscardable:(BOOL)a0;
- (id)description;
- (void)setGroupIdentifier:(id)a0;
- (void)dealloc;
- (BOOL)isDiscardable;
- (id)userInfo;

@end
