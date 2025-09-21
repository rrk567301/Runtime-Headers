@interface FCModifyTagSettingsCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithTagSettingsEntries:(id)a0 merge:(char)a1;
- (char)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
