@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (BOOL)supportsSecureCoding;

- (id)author;
- (id)initWithStorage:(id)a0;
- (id)changes;
- (id)storeID;
- (id)accountID;
- (id)token;
- (id)timestamp;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)_resolveAccountID:(id)a0;

@end
