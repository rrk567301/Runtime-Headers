@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
}

- (void)dealloc;
- (id)description;
- (id)groupIdentifier;
- (void)setDiscardable:(BOOL)a0;
- (BOOL)isBeginMark;
- (BOOL)isDiscardable;
- (void)setGroupIdentifier:(id)a0;

@end
