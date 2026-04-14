@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
}

- (void)dealloc;
- (id)description;
- (BOOL)isBeginMark;
- (void)setGroupIdentifier:(id)a0;
- (id)groupIdentifier;
- (BOOL)isDiscardable;
- (void)setDiscardable:(BOOL)a0;

@end
