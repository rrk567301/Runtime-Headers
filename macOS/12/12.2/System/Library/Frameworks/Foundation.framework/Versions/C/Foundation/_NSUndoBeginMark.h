@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
}

- (void)dealloc;
- (id)description;
- (BOOL)isBeginMark;
- (BOOL)isDiscardable;
- (id)groupIdentifier;
- (void)setGroupIdentifier:(id)a0;
- (void)setDiscardable:(BOOL)a0;

@end
