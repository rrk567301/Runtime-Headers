@interface FCModifyShortcutsCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithShortcuts:(id)a0 merge:(char)a1;
- (char)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
