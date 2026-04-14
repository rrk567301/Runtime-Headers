@interface CNChangeHistoryPendingChangesSummary : NSObject

@property (class, readonly) CNChangeHistoryPendingChangesSummary *noChanges;

@property long long countOfAddedContacts;
@property long long countOfUpdatedContacts;
@property long long countOfDeletedContacts;
@property (readonly, getter=isEmpty) BOOL empty;

- (id)description;
- (long long)totalChanges;

@end
