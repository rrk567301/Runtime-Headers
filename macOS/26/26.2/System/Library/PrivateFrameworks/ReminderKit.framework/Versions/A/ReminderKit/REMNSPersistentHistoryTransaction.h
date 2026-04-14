@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (BOOL)supportsSecureCoding;

- (id)accountID;
- (id)token;
- (id)changes;
- (id)initWithCoder:(id)a0;
- (id)storeID;
- (id)author;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)timestamp;
- (void)_resolveAccountID:(id)a0;

@end
