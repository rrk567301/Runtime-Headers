@class NSMutableDictionary;

@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    char _isDiscardable;
    NSMutableDictionary *_userInfo;
}

- (void)dealloc;
- (id)description;
- (id)userInfo;
- (void)setUserInfo:(id)a0;
- (id)groupIdentifier;
- (void)setDiscardable:(char)a0;
- (char)isBeginMark;
- (char)isDiscardable;
- (void)setGroupIdentifier:(id)a0;

@end
