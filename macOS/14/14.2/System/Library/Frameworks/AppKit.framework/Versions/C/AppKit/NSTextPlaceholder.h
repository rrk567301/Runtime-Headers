@interface NSTextPlaceholder : NSObject {
    id _owner;
    id _internal;
}

@property id owner;
@property (readonly) id attributedStringValue;
@property (readonly) BOOL committed;

- (void)dealloc;
- (id)identifier;
- (void)setOwner:(id)a0;
- (void)commit;
- (id)owner;
- (void)_postCommitNotification;
- (id)initWithIdentifier:(id)a0 text:(id)a1 doCommit:(BOOL)a2;
- (void)setText:(id)a0 doCommit:(BOOL)a1;

@end
