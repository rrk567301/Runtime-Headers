@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (BOOL)supportsSecureCoding;

- (id)initWithStorage:(id)a0;
- (id)author;
- (id)changes;
- (id)accountID;
- (id)storeID;
- (id)token;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)timestamp;
- (BOOL)isEqual:(id)a0;
- (void)_resolveAccountID:(id)a0;

@end
