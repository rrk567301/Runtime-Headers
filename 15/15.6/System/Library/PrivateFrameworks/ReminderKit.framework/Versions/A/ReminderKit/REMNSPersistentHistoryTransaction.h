@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (char)supportsSecureCoding;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)timestamp;
- (id)changes;
- (id)token;
- (id)initWithStorage:(id)a0;
- (id)storeID;
- (id)author;
- (id)accountID;
- (void)_resolveAccountID:(id)a0;

@end
