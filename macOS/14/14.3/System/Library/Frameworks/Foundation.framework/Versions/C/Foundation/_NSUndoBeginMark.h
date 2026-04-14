@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
}

- (void)dealloc;
- (id)description;
- (void)setDiscardable:(BOOL)a0;
- (id)groupIdentifier;
- (BOOL)isBeginMark;
- (BOOL)isDiscardable;
- (void)setGroupIdentifier:(id)a0;

@end
