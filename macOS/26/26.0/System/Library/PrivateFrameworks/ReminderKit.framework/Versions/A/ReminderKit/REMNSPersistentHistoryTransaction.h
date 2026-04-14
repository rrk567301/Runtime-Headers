@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (BOOL)supportsSecureCoding;

- (id)author;
- (id)changes;
- (id)accountID;
- (id)storeID;
- (id)initWithStorage:(id)a0;
- (id)timestamp;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)token;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_resolveAccountID:(id)a0;

@end
