@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (BOOL)supportsSecureCoding;

- (id)initWithStorage:(id)a0;
- (id)accountID;
- (id)changes;
- (id)description;
- (id)token;
- (void).cxx_destruct;
- (id)storeID;
- (id)initWithCoder:(id)a0;
- (id)author;
- (BOOL)isEqual:(id)a0;
- (id)timestamp;
- (void)encodeWithCoder:(id)a0;
- (void)_resolveAccountID:(id)a0;

@end
