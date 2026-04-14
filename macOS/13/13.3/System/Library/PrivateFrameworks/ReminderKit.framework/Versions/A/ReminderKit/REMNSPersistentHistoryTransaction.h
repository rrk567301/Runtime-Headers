@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)changes;
- (id)timestamp;
- (id)token;
- (id)storeID;
- (id)author;
- (id)accountID;
- (id)initWithStorage:(id)a0;
- (void)_resolveAccountID:(id)a0;

@end
