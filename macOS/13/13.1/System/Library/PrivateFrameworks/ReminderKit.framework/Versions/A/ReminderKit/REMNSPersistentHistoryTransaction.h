@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)changes;
- (id)token;
- (id)timestamp;
- (id)storeID;
- (id)author;
- (id)accountID;
- (id)initWithStorage:(id)a0;
- (void)_resolveAccountID:(id)a0;

@end
