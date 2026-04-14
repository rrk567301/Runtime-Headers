@class NSMutableDictionary;

@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
    NSMutableDictionary *_userInfo;
}

- (void)setDiscardable:(BOOL)a0;
- (id)groupIdentifier;
- (void)setUserInfo:(id)a0;
- (BOOL)isBeginMark;
- (void)setGroupIdentifier:(id)a0;
- (id)userInfo;
- (BOOL)isDiscardable;
- (id)description;
- (void)dealloc;

@end
